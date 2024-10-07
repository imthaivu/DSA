#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
// De quy:
// dry run
// stack: de cac
int fibo(int n)
{
    return fibo(n - 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fibo(10);
    return 0;
}