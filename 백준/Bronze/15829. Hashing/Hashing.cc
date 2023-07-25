#include<bits/stdc++.h>
using namespace std;
int main() {
	int L,s1;
	long h = 0, square;
	string s;
	vector<int> al = { 'a','b','c' ,'d' ,'e' ,'f' ,'g' ,'h' ,'i' ,'j' ,'k' ,'l' ,'m' ,'n' ,'o' ,'p' ,'q' ,'r' ,'s' ,'t' ,'u' ,'v' ,'w' ,'x' ,'y' ,'z' };

	cin >> L >> s;

	for (int i = 0; i < L; i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == al[j]) {
				s1 = j + 1;
				square = pow(31, i);
				h += s1 * square;
			}
		}
	}
	cout << h;
}