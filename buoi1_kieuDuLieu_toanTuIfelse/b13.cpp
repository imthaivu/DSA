#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    if (a % b != 0)
    {
        cout << (a / b) * b;
    }
    else
    {
        cout << a;
    }

    return 0;
}