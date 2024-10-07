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
    // gan gia tri
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // neu lon hon max thi gan max =
            if (a[i][j] > max)
                max = a[i][j];
            // neu < min thi
            if (a[i][j] < min)
                min = a[i][j];
        }
    }
    cout << min << endl; // in ra min
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (min == a[i][j])
                cout << i + 1 << ' ' << j + 1 << endl; // in vi tri
        }
    }
    cout << max << endl; // in ra max
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max == a[i][j])
                cout << i + 1 << ' ' << j + 1 << endl; // in vi tri
        }
    }
    return 0;
}