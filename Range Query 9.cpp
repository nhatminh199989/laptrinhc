#include<iostream>

using namespace std;
void nhap(int a[], int n) {
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
}
int find(int a[], int n) {
	int count = 0;
	while (1) {
		int i = 0;
		for (i; i < n; ++i) {
			if (a[i] % 2 != 0) {
				break;
			}
		}
		int temp = 0;
		for (int j = 0; j < n; ++j) {
			if (a[j] == 0) {
				++temp;
			}
		}
		if (temp == n) {
			return count;
		}
		if (i == n) {
			for (int j = 0; j < n; ++j) {
				a[j] = a[j] / 2;
			}
			++count;
		}
		for (int j = i; j < n; ++j) {
			if (a[j] % 2 != 0) {
				a[j]--;
				++count;
			}
		}
	}
}
int main() {
	short t;
	cin >> t;
	while (t > 0) {
		int n;
		cin >> n;
		int a[n];
		nhap(a, n);
		cout << find(a, n) << endl;
		--t;
	}
	return 0;
}
