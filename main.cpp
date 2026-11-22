#include <iostream>
#include "lab01.hpp"
using namespace std;

int main() {
    const int CAP = 8;
    int a[CAP] = {70, 80, 90, 85};
    int size = 4;
    int choice, pos, x;

    while (true) {
        cout << "\n1. Display";
        cout << "\n2. Insert";
        cout << "\n3. Delete";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Array: ";
            for (int i = 0; i < size; i++) {
                cout << a[i] << " ";
            }
            cout << "\nSize: " << size;
            cout << "\nCapacity: " << CAP << endl;
        }

        else if (choice == 2) {
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> x;

            if (insertAt(a, size, CAP, pos, x))
                cout << "Insertion successful";
            else
                cout << "Insertion failed (Array full or invalid position)";
        }

        else if (choice == 3) {
            cout << "Enter position: ";
            cin >> pos;

            if (deleteAt(a, size, pos))
                cout << "Deletion successful";
            else
                cout << "Deletion failed (Array empty or invalid position)";
        }

        else if (choice == 4) {
            cout << "Program ended";
            break;
        }

        else {
            cout << "Invalid choice";
        }
    }

    return 0;
}
