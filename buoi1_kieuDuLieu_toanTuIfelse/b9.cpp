#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long s = 0;
    for (long long i = 1; i <= n; i++)
    {

        s += i * i;
    }
    cout << s;

    return 0;
}