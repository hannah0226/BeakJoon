#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,x;
	string a;
	stack<int> st;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == "push") {
			cin >> x;
			st.push(x);
		}
		else if (a == "pop") {
			if (st.empty())
				cout << -1 << "\n";
			else {
				cout << st.top() << "\n";
				st.pop();
			}
		}
		else if (a == "size")
			cout << st.size() << "\n";
		else if (a == "empty")
			(st.empty()) ? cout << 1 << "\n" : cout << 0 << "\n";
		else if (a == "top") {
			if (st.empty())
				cout << -1 << "\n";
			else
				cout << st.top() << "\n";
		}
		else
			continue;
	}
}