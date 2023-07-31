#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,a;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		a = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(')
				a++;
			else
				a--;
			if (a < 0)
				break;
		}
		if (a < 0 || a>0)
			cout << "NO" << "\n";
		else
			cout << "YES" << "\n";
	}
}