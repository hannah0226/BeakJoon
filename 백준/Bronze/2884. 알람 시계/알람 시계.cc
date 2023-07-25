#include<bits/stdc++.h>
using namespace std;
int main() {
	int H, M, m;
	cin >> H >> M;

	if (M < 45) {
		m = 45 - M;
		M = 60 - m;
		if (H == 0)
			H = 23;
		else
			H--;
	}
	else
		M = M - 45;

	cout << H << ' ' << M;
}