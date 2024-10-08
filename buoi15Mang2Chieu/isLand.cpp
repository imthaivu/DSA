#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;

// Chỉ sử dụng 4 hướng di chuyển (trên, dưới, trái, phải)
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int a[100][100];
int n, m;

void loang(int i, int j)
{
    a[i][j] = 0; // đánh dấu đã loang rồi
    for (int k = 0; k < 4; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1)
        {
            loang(i1, j1);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1)
            {
                cnt++;
                loang(i, j);
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
