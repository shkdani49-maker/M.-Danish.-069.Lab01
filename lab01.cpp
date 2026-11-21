 function:

bool insertAt(int a[], int& size, int cap, int pos, int x) {
    if (size == cap || pos < 0 || pos > size)
        return false;

    for (int i = size; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = x;
    size++;

    return true;
}

Delete Function:

bool deleteAt(int a[], int& size, int pos) {
    if (pos < 0 || pos >= size)
        return false;

    for (int i = pos; i < size - 1; i++) {
        a[i] = a[i + 1];
    }

    size--;

    return true;
}