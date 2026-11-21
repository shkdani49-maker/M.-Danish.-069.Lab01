#!/usr/bin/env bash
# CSC-531 Lab 01: one-command submission from GitHub Codespaces.
set -euo pipefail

cd "$(dirname "$0")"

if [[ ! -f .classroom50.yaml ]] || ! grep -Eq '^assignment:[[:space:]]*"?lab01-arrays"?[[:space:]]*$' .classroom50.yaml; then
  echo "ERROR: Open your own accepted Lab 01 student repository in Codespaces."
  echo "This script does not submit from the teacher's starter template."
  exit 1
fi

if [[ "$(git branch --show-current)" != "main" ]]; then
  echo "ERROR: Switch to the main branch before submitting."
  exit 1
fi

for file in lab01.cpp main.cpp REPORT.md; do
  if [[ ! -f "$file" ]]; then
    echo "ERROR: Required assignment file '$file' is missing."
    exit 1
  fi
done

if ! git diff --quiet HEAD -- lab01.hpp .classroom50.yaml .github/workflows/autograde.yaml; then
  echo "ERROR: A required configuration/header file has changed."
  echo "Do not change lab01.hpp, .classroom50.yaml or .github/workflows/autograde.yaml."
  echo "Ask your instructor before restoring any changes you want to keep."
  exit 1
fi

echo "== CSC-531 Lab 01 submission =="
git add -- lab01.cpp main.cpp REPORT.md
if ! git diff --cached --quiet; then
  git commit -m "Submit Lab 01 work"
else
  echo "No new assignment changes; submitting the latest committed version."
fi

echo "Pushing your main branch to GitHub..."
git push origin main

tag="submit/$(date -u +%Y%m%dT%H%M%SZ)-$(git rev-parse --short HEAD)"
if git show-ref --quiet --verify "refs/tags/$tag"; then
  tag="$tag-$RANDOM"
fi

git tag "$tag"
echo "Requesting automatic grading for $tag..."
git push origin "$tag"

echo
echo "SUBMISSION SENT: $tag"
echo "Open your GitHub repository > Actions to see the grading run."
echo "Open your GitHub repository > Releases to see your score."
if [[ -n "$(git status --porcelain)" ]]; then
  echo "Note: Other local files are still uncommitted (not included in this submission):"
  git status --short
fi
