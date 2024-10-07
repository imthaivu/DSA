#include <bits/stdc++.h>
#include <math.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int n, m;
int a[500][500];

ll ans = 0;
int cnt = 0;
void Try(int i, int j, ll sum)
{

    if (i == n && j == m)
    {
        cnt++;
        ans = max(ans, sum);
    }
    else
    {
        if (i + 1 <= n)
        {
            Try(i + 1, j, sum + a[i + 1][j]);
        }
        if (j + 1 <= m)
            Try(i, j + 1, sum + a[i][j + 1]);
    }
}
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
    Try(1, 1, a[1][1]);
    cout << ans<<endl;
    cout << cnt;//so luong duong di
    return 0;
}