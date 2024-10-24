#include<iostream>
using namespace std;

int main() {
    int n, i, x, pos;
    int arr[10];

    cout << "Enter the size of array: ";
    cin >> n;

    if (n > 10) {
        cout << "Error: Array size exceeds the maximum limit of 10." << endl;
        return 1;
    }

    cout << "Enter the elements of array: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deleting at start
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];  // Shift elements to the left
    }
    n--;  // Decrease array size
    cout << "Array after deletion at start: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deleting at end
    n--;  // Simply reduce the size of the array
    cout << "Array after deletion at end: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deleting at a specific position
    cout << "Enter the position of element to delete: ";
    cin >> pos;

    if (pos < 1 || pos > n) {
        cout << "Error: Invalid position!" << endl;
        return 1;
    }

    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];  // Shift elements to the left
    }
    n--;  // Reduce size

    cout << "Array after deletion at position " << pos << ": ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
