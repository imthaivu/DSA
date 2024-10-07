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
    pair<int, int> a[n];
    for (auto &&i : a)
    {
        cin >> i.first;
        cin >> i.second;
    }
    // sap xep thoi gian
    sort(a, a + n);
    int end_time = a[0].first + a[0].second;
    for (int i = 1; i < n; i++)
    {
        // duoc check in luc
        int checkInTime = max(end_time, a[i].first); // thoi gian xong cua nguoi truoc va thoi gian den cua minh
        end_time = checkInTime + a[i].second;        // cap nhat thoi gian check in xong
    }
    cout << end_time;
    return 0;
}