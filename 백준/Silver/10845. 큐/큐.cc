#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, x;
	string a;
	queue<int> qu;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == "push") {
			cin >> x;
			qu.push(x);
		}
		else if (a == "pop") {
			if (qu.empty())
				cout << -1 << "\n";
			else {
				cout << qu.front() << "\n";
				qu.pop();
			}
		}
		else if (a == "size")
			cout << qu.size() << "\n";
		else if (a == "empty")
			(qu.empty()) ? cout << 1 << "\n" : cout << 0 << "\n";
		else if (a == "front") {
			if (qu.empty())
				cout << -1 << "\n";
			else
				cout << qu.front() << "\n";
		}
		else if (a == "back") {
			if (qu.empty())
				cout << -1 << "\n";
			else
				cout << qu.back() << "\n";
		}
		else
			continue;
	}
}