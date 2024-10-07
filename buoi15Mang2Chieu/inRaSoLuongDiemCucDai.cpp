#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int dx[8] = {1, 1, 1, 0, -1, -1, -1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    // xet 8 o xung quanh
    for (int i = 0; i < n; i++) // xet hang
    {
        for (int j = 0; j < m; j++) // xet cot
        {
            bool checkCucDai = true;
            for (int k = 0; k < 8; k++) // xet phan tu xung quanh cua mot phan tu
            {
                int i1 = i + dx[k];
                int j1 = j + dy[k];
                if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m) // chi xet o nao co 8 o xung quanh
                {                                           // cac o xung quanh thoa dieu kien
                    if (a[i1][j1] >= a[i][j])
                    {
                        checkCucDai = false;
                        break;
                    }
                }
            }
            if (checkCucDai == true) // dem phan tu co cai check phai uu tien phan tu bang ket qua duoc count
            {
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}