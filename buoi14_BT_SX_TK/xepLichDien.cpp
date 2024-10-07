#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
// bai toan schedule
// sort theo thoi gian ket thuc som nhat
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
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
    // sap xep theo lich ket thuc tang dan
    sort(a, a + n, cmp);

    int count = 1;
    int ngayTruocDo = a[0].second; // ngay ket thuc dau tien
    for (int i = 1; i < n; i++)
    {
        // neu ngay bat dau i lon hon ngay truoc do
        if (a[i].first >= ngayTruocDo)
        {
            count++;
            ngayTruocDo = a[i].second; // cap nhat ngay truoc do cho cac gia tri sau
        }
        else
            continue; // chuyen qua phan tu khac
    }
    cout << count;
    return 0;
}