#include<iostream>
using namespace std;

int main() {
    int n, i, x;
    int arr[10];

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Searching
    cout << "Enter the element to search: ";
    cin >> x;
    for(i = 0; i < n; i++) {
        if(arr[i] == x) {
            cout << "Element found at index " << i << endl;
            break;
        }
    }

    if(i == n) {
        cout << "Element not found!" << endl;  // Added newline for better readability
    }

    // Updating
    int index;
    cout << "Enter index to update: ";
    cin >> index;

    if(index >= n || index < 0) {
        cout << "Invalid index!" << endl;
    } else {
        cout << "Enter the new element: ";
        cin >> x;
        arr[index] = x;
    }

    cout << "Array elements after update: ";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting (Bubble Sort)
    for(i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {  // Optimized Bubble Sort
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
