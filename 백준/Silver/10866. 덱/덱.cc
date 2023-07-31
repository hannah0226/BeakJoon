#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, x;
	string a;
	deque<int> de;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == "push_front") {
			cin >> x;
			de.push_front(x);
		}
		else if (a == "push_back") {
			cin >> x;
			de.push_back(x);
		}
		else if (a == "pop_front") {
			if (de.empty())
				cout << -1 << "\n";
			else {
				cout << de.front() << "\n";
				de.pop_front();
			}
		}
		else if (a == "pop_back") {
			if (de.empty())
				cout << -1 << "\n";
			else {
				cout << de.back() << "\n";
				de.pop_back();
			}
		}
		else if (a == "size")
			cout << de.size() << "\n";
		else if (a == "empty")
			(de.empty()) ? cout << 1 << "\n" : cout << 0 << "\n";
		else if (a == "front") {
			if (de.empty())
				cout << -1 << "\n";
			else
				cout << de.front() << "\n";
		}
		else if (a == "back") {
			if (de.empty())
				cout << -1 << "\n";
			else
				cout << de.back() << "\n";
		}
		else
			continue;
	}
}