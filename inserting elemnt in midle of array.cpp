#include <iostream>
using namespace std;
int main() {
    const int size = 5;
    int arr[size + 1]; 
    int element;
    cout << "Enter " << size << " elements for the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to insert in the middle: ";
    cin >> element;
    int mid = size / 2;

    for (int i = size; i > mid; i--) {
        arr[i] = arr[i - 1];
    }
    arr[mid] = element;
    cout << "Array after insertion: ";
    for (int i = 0; i < size + 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
