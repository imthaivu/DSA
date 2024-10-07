#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
bool dx(int a[], int l, int r)
{
    if (l >= r)
        return true;
    if (a[l] != a[r])
        return false;
    return dx(a, l + 1, r - 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tmp;
    vector<int> a; // nhap mang khong xac
    while (cin >> tmp)
    {
        a.push_back(tmp);
    }
    int b[a.size()];
    for (int i = 0; i < a.size(); i++)
    {
        b[i] = a[i];
    }

    cout << dx(b, 0, a.size() - 1);
    return 0;
}