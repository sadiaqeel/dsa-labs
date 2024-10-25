#include <iostream>
using namespace std;

int main() {
    int n, *arr, evenCount = 0, oddCount = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    
    arr = new int[n];

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;
}
