#include <iostream>
using namespace std;
void insertion_sort(int a[], int n) {
	int i, j, temp;
	for (i = 1; i < n; i++) {
		temp = a[i];
		for (j = i - 1; j >= 0 && a[j] > temp; j--)
			a[j + 1] = a[j];
		a[j + 1] = temp;
	}

}
void print_array(int a[], int n) {
	int i;
	cout << "ARR: ";
	for (i = 0; i < n; i++)
		cout << a[i] << ", ";
	cout << endl;
}
int main() {
	int arr[10] = { 35, 33, 42, 10, 14, 19, 27, 44, 26, 37 };
	print_array(arr, 10);
	insertion_sort(arr, 10);
	cout << "after applying insertion sort" << endl;
	print_array(arr, 10);
	return 0;
}

