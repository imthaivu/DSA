#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long t = 0;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        t += (int)pow(-1, i);
    }
    cout << t;

    return 0;
}