#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    // kiem tra chua co thi moi in ra
    // in ra khong trung nhau cach 1
    for (int i = 0; i < n; ++i)
    {
        bool kiemTraCoChua = false; // chua co
        for (int j = 0; j < i; j++)
        {
            if (a[j] == a[i])
            {
                kiemTraCoChua = true; // co roi
            }
        }
        if (!kiemTraCoChua)
        { // chua co
            cout << a[i] << " ";
        }
    }
    // in ra khong trung nhau cach 2
    cout << "/////////////////" << endl;
    int mangChiSoDanhDau[n] = {0};

    for (int i = 0; i < n; i++)
    {
        mangChiSoDanhDau[i] = 0;
    }

    for (int i = 0; i < n; ++i)
    {
        if (mangChiSoDanhDau[i] == 0)
        {
            cout << a[i] << ' ';
            // danh dau
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] == a[i])
                {
                    mangChiSoDanhDau[j] = 1;
                }
            }
        }
    }

    // in ra khong trung nhau cach 3
    for (int i = 0; i < n; i++)
    {
        mangChiSoDanhDau[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (mangChiSoDanhDau[a[i]] == 0)
        {
            cout << a[i] << " ";
            mangChiSoDanhDau[a[i]] = 1;
        }
    }
    cout << endl;
    return 0;
}