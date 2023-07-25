#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> A(8);

	for (int i = 0; i < 8; i++)
		cin >> A[i];
	if (A[0] == 1 && A[1] == 2 && A[2] == 3 && A[3] == 4 && A[4] == 5 && A[5] == 6 && A[6] == 7 && A[7] == 8)
		cout << "ascending";
	else if (A[7] == 1 && A[6] == 2 && A[5] == 3 && A[4] == 4 && A[3] == 5 && A[2] == 6 && A[1] == 7 && A[0] == 8)
		cout << "descending";
	else
		cout << "mixed";
}