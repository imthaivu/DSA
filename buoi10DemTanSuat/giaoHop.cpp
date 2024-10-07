#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1000000007; // snt, bao toan tinh chat modulo

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Tron 2 mang da duoc sap xep
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }//

    int i = 0, j = 0;
    vector<int> hop, giao;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            giao.push_back(a[i]);
            hop.push_back(a[i]);
            ++i;
            ++j;
        }
        else if (a[i] < b[j])
        {
            hop.push_back(a[i]);
            ++i;
        }
        else
        {
            hop.push_back(b[j]);
            ++j;
        }
    }

    while (i < n)
    {
        hop.push_back(a[i]);
        ++i;
    }

    while (j < m)
    {
        hop.push_back(b[j]);
        ++j;
    }

    for (auto &&value : giao)
    {
        cout << value << ' ';
    }
    cout << endl;

    for (auto &&value : hop)
    {
        cout << value << ' ';
    }

    return 0;
}
