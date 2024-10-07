#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
bool checkNT(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        /* code */
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    // dem cheo chinh, phu
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (checkNT(a[i][i]))
        {
            cnt++;
        }
        if (checkNT(a[i][n - i - 1]))
        {
            cnt++;
        }
    }
    // truong hop n = le thi check 2 lan
    if (n % 2 == 1)
    {
        if (checkNT(a[n / 2][n / 2]))
            cnt--;
    }
    cout << cnt;

    return 0;
}