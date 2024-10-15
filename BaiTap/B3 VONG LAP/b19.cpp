#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    if (n == 1 && t == 2)
    {
        cout << 2;
    }
    else if (n == 1 && t == 10)
    {
        cout << -1;
    }
    else if (t == 10)
    {
        cout << t; // 10
        for (int i = 0; i < n - 2; i++)
        {
            cout << 0;
        }
    }
    else
    {
        cout << t; // 2-9
        for (int i = 0; i < n - 1; i++)
        {
            cout << 0;
        }
    }

    //co sai gi khong
    

    return 0;
}