#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

void SelectionSort(int a[], int n) {
	int min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min])
				min = j;
		}
		swap(a[i], a[min]);
	}
}

void InterchangeSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[i])
				swap(a[i], a[j]);
		}
	}
}

void InsertSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int tmp = a[i];
		int k = 0;
		for (k = i - 1; k > -1; k--) {
			if (a[k] < tmp)
				break;
			a[k + 1] = a[k];
		}
		a[k + 1] = tmp;
	}
}

void BoubleSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; j--) {
			if (a[j - 1] > a[j]) {
				swap(a[j - 1], a[j]);
			}
		}
	}
}

int main() {
	int *a;
	a = new int [1000000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
//	SelectionSort(a, n);
//	InsertSort(a, n);
//	InterchangeSort(a, n);
//	BoubleSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	delete[] a;
	return 0;
}