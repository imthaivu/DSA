#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int n, m;
int a[500][500];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1)
                a[i][j] += a[i][j - 1]; // hang ngang
            else if (j == 1)
            {
                a[i][j] += a[i - 1][j];
            }
            else
            {
                a[i][j] += max(a[i - 1][j], a[i][j - 1]);
            }
        }
    }
    cout << a[n][m];

    return 0;
}