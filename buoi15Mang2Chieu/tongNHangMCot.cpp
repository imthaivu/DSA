#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int m;
    cin >> n >> m;
    int a[200][200];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // tong n hang
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0; // reset khi qua hang moi
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
        cout << sum << ' ';
    }
    cout << endl;
    // tong m cot duyet j roi duyet i

    for (int j = 0; j < m; j++)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i][j];
        }
        cout << sum << ' ';
    }

    return 0;
}