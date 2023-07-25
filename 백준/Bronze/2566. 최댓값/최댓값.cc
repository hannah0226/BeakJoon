#include<bits/stdc++.h>
using namespace std;
int main() {
	int max = 0, r, c;
	vector<vector<int>>A(9, vector<int>(9));
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> A[i][j];
			if (A[i][j] >= max) {
				max = A[i][j];
				r = i;
				c = j;
			}
		}
	}
	cout << max << '\n' << r+1 << ' ' << c+1;
}