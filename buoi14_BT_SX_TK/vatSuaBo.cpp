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
    for (auto &&i : a)
    {
        cin >> i;
    }
    // sap xep
    sort(a, a + n, greater<int>());
    // tinh so luong sua
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > i)
        {
            ans += a[i] - i; // muon toi uu?
        }
        else
            break;
    }
    cout << ans;
    //10 7 3 
    return 0;
}