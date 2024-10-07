#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
void convert(ll n)
{
    if (n % 16 == 0)
    {
        return;
    }
    convert(n / 16);
    if (n % 16 == 10)
    {
        cout << 'A';
    }
    else if (n % 16 == 11)
    {
        cout << 'B';
    }
    else if (n % 16 == 12)
    {
        cout << 'C';
    }
    else if (n % 16 == 13)
    {
        cout << 'D';
    }
    else if (n % 16 == 14)
    {
        cout << 'E';
    }
    else if (n % 16 == 15)
    {
        cout << 'F';
    }
    else
    {
        cout << n % 16;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    convert(123412341234);
    cout << endl; 
    cout << hex << 123412341234;
    return 0;
}