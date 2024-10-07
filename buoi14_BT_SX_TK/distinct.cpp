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
    cin >> n;
    int a[n];
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    cout << se.size();
return 0;
}