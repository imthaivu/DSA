#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int lowerB(int a[], int n, int x)
{
    int res = -1;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] >= x)
        {
            res = mid; // danh dau neu a[mid]>=x
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res;
}
int upperB(int a[], int n, int x)
{
    int res = -1;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] > x)
        {
            res = mid; // danh dau neu a[mid]>=x
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res;
}
// lowerbound >=
// upperbound >

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &&i : a)
    {
        cin >> i;
    }
    auto it = upper_bound(a.begin(), a.end(), x);
    int chiSo = it - a.begin();
    cout << chiSo << endl;
    return 0;
}