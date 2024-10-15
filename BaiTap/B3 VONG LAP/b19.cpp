#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    if (n == 1 && t == 10)
    {
        cout << -1;
    }
    else if (t == 10)
    {
        cout << 1;
        for (int i = 0; i < n - 1; i++)
        {
            cout << 0;
        }
    }
    else
    {
        cout << t;
        for (int i = 0; i < n - 1; i++)
        {
            cout << 0;
        }
    }

    return 0;
}