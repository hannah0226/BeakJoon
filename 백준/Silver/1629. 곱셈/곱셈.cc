#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, m;
    cin >> a >> b >> m;

    long long res = 1;
    while (b){
        if (b % 2) res = (res * a) % m;
        a = a * a % m;
        b /= 2;
    }

    cout << res;
}