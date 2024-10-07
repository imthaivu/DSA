#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m];
    int b[m][p];
    ll c[n][p];
    // matrix 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // matrix 2
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> b[i][j];
        }
    }
    // nhan 2 ma tran
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            // tinh c[i][j]
            c[i][j] = 0; // reset gia tri rong vi moi c[i][j] la mot sum
            for (int k = 0; k < m; k++)
            {
                c[i][j] += (ll)a[i][k] * b[k][j];
            }
        }
    }
    // in matrix c
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}