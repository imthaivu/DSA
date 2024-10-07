#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    int a[n + 1][n + 1];//tai sao khong khoi tao n m?
    //vi khi khoi tao n+1 ta co the xet so lan xuat hien 
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        //dong dau tien cho xuat hien voi cac phtu
        for (int j = 1; j <= n; j++)
        {
            if (mp[a[i][j]] == i - 1)//neu da xuat voi cac dong truoc va du so luong
            {
                mp[a[i][j]] = i;//cap nhat lai 'val va so luong' them len
            }
        }
    }
    for (auto it : mp)
    {
        if (it.second == n)
            cout << it.first << ' ';
    }
    return 0;
}