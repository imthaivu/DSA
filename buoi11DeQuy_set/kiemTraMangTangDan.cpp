#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
bool isTangDan(int a[], int n)
{
    // neu co 1 ptu => true neu duyet den ptu dau tien ma ch thay sai
    // neu con ptu => false
    if (n == 1)
        return true;
    if (a[n - 1] < a[n - 2])
        return false;
    return isTangDan(a, n - 1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[] = {10, 2, 3, 4, 6, 20, 30, 40};
    int len = sizeof(a) / sizeof(a[0]); // lay kich thuoc byte cua mang chia cho 1 phan tu
    cout << isTangDan(a, len);
    return 0;
}