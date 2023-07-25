#include<bits/stdc++.h>
using namespace std;
int main() {
	int L, s1;
	long long hash = 0, r = 1, M = 1234567891;
	string s;

	cin >> L >> s;

	for (int i = 0; i < L; i++) {
		s1 = s[i] - 96;
		hash = (hash + s1 * r) % M;
		r = (r * 31) % M;
	}
	cout << hash;
}