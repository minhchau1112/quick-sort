#include<iostream>
using namespace std;

void QuickSort(int* a, int l,int r) {
	int pivot = a[(l + r) / 2];
	int i = l, j = r;
	while (i <= j) {
		while (a[i] < pivot)i++;
		while (a[j] > pivot)j--;
		if (i <= j) {
			swap(a[i], a[j]);
			i++; j--;
		}
	}
	if (j > l)QuickSort(a, l, j);
	if (i < r)QuickSort(a, i, r);
}

int main() {
	int n;
	cout << "Enter the number of elements : ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand();
	}
	QuickSort(a, 0,n-1);
	for (int j = 0; j < n; j++) {
		cout << a[j] << " ";
	}
	delete[] a;
	return 0;
}