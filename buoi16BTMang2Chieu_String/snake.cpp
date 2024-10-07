#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int a[100][100];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        // neu dong le - > i chan trai-phai
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << a[i][j];
            }
        }
        else // nguoc lai
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << a[i][j];
            }
        }
    }

    return 0;
}