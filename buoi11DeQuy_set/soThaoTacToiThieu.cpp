#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
int solve(int n)
{
    if (n == 1)
        return 0;
        //de khi khong tim thay phan tu nao thi no bo gia tri cnt do di
    int cnt1 = 1e9;
    int cnt2 = 1e9;
    int cnt3 = 1e9;
    if (n % 2 == 0)
    {
        cnt1 = 1 + solve(n / 2);
    }
    if (n % 3 == 0)
    {
        cnt2 = 1 + solve(n / 3);
    }
    if (n > 1)
    {
        cnt3 = 1 + solve(n - 1);
    }
    return min({cnt1, cnt2, cnt3});
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    cout << solve(n);
    return 0;
}