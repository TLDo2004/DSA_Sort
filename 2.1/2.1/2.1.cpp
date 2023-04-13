#include <iostream>
using namespace std;

void Nhap(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void Xuat(int* a, int* b, int n, int m) {
	int i = 0, j = 0;
	while (i < n || j < m) {
		if (a[i] <= b[j]) {
			if(i < n)
				cout << a[i] << " ";
			i++;
		}
		else if (a[i] > b[j]) {
			if(j < m)
				cout << b[j] << " ";
			j++;
		}
	}
	cout << endl;
}

int main() {
	int test;
	cin >> test;
	for (int t = 1; t <= test; t++) {
		int n, m;
		cin >> n >> m;
		int* a = new int[n];
		int* b = new int[m];
		Nhap(a, n);
		Nhap(b, m);
		Xuat(a, b, n, m);
		delete[] a;
		delete[] b;
	}
	return 0;
}