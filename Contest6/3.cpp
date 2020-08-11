//Su dung thuat toan sap xep chon (Selecsort)
#include<bits/stdc++.h>

using namespace std;

int solve(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n - 1; i++) {
		int m = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[m]) m = j;
		swap(a[i], a[m]);
		if (i != m) dem++;
	}
	return dem;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a[1001];
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << solve(a, n) << endl;
	}
}
