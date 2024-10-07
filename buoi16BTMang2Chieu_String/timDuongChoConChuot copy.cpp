#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0}; // move 4
int n, m;
int a[500][500];
void loang(int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k < 4; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 1)
        {
            loang(i1, j1);
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, t, u, v;
    cin >> n >> m;
    cin >> s >> t >> u >> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // loang
    loang(s, t);
    //  kiem tra a[u][v] co bi loang hay khong
    if (a[u - 1][v - 1] == 1) // khong bi loang
    {
        cout << "no";
    }
    else
    {
        cout << "yes"; // co bi loang
    }
    return 0;
}