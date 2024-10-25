#include <iostream>
using namespace std;

int main() {
	int n, max, min;
	cout << "Enter the number of elements: ";
	cin >> n;

	cout << "Enter " << n << " numbers: ";
	cin >> max;
	min = max;

	for (int i = 1; i < n; i++) {
		int num;
		cin >> num;
		if (num > max) {
			max = num;
		}
		if (num < min) {
			min = num;
		}
	}

	cout << "Maximum value: " << max << endl;
	cout << "Minimum value: " << min << endl;

	return 0;
}
