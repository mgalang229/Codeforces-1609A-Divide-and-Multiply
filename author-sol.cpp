#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<long long> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// divide the even numbers until they are 
		// not divisible by 2 anymore
		long long temp = 1;
		for (int i = 0; i < n; i++) {
			while (a[i] % 2 == 0) {
				a[i] /= 2;
				temp *= 2;
			}
		}
		// sort the sequence in non-decreasing order 
		// and multiply the value above to largest element
		sort(a.begin(), a.end());
		a[n - 1] *= temp;
		// calculate the sum of the sequence
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
		}
		cout << sum << '\n';
	}
	return 0;
}
