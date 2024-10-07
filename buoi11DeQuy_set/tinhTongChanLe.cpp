#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int chan(int n)
{
    if (n < 10)
    {
        // neu 1 so
        // chan return n
        // le return chan

        // neu nhieu so
        if (n % 2 == 0)
        {
            return n;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if (n % 10 % 2 == 0)
        {
            return n % 10 + chan(n / 10);
        }
        else
        {
            return chan(n / 10);
        }
    }
}
int le(int n)
{
    if (n < 10)
    {
        // neu 1 so
        // ko le return 0
        // le return le

        // neu nhieu so
        if (n % 2 == 1)
        {
            return n;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if (n % 10 % 2 == 1)
        {
            return n % 10 + le(n / 10);
        }
        else
        {
            return le(n / 10);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int n;
    // cin >> n;
    cout << chan(12341234);
    cout << endl;
    cout << le(12341234);
    return 0;
}