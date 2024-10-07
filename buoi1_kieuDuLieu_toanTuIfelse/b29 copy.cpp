#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n[5];
    for (int i = 0; i < size(n); i++)
    {
        cin >> n[i];
    }
    int re = max(n[0], n[1]);
    for (int i = 2; i < size(n); i++)
    {
        /* code */
        if (n[i] < re)
            re = n[i];
    }
    cout << re;

    return 0;
}