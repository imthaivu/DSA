#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int tong(int a[][100], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    // int a[n][m]; //(hang , cot)
    // nen khai bao du ra dung it cung duoc
    int a[100][100];
    //int a[1000][1000]; //--> stackoverFlow nen khai  bao ngoai ham main
    //int a[10^7] --> tran bo nho stack
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    cout << tong(a, n, m);
    return 0;
}