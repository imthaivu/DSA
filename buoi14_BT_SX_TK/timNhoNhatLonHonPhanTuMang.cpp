#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int first(int a[], int n, int x)
{
    int res = -1;
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (x < a[mid]) // lay mid nao lon hon x
        {
            r = mid - 1;

            res = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);             // de lay gia tri nho nhat lon hon x
    for (int i = 0; i < n; i++) // n
    {

        // int pos = first(b, n, a[i]); // log n
        auto it = upper_bound(b, b + n, a[i]);
        if (it == b + n) // duyet den cuoi
        {
            cout << "_ ";
        }
        else
            cout << *it << " ";//lay gia tri
    }
    return 0;
}