#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	return b ? gcd(b, a % b) : a;
}

int main() {
	int n, s, d, ans=0;
	cin >> n >> s;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> d;
		v[i] = abs(s - d);
		ans = gcd(v[i], ans);
	}

	cout << ans;
}