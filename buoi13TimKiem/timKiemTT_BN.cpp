#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
bool linearSearch(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return true;
        }
    }
    return false;
}
bool BNSearch(int a[], int n, int x)
{
    int l = 0;
    int r = n - 1;
    while (l <= r) // truong hop  bang khi l = r = mid
    {
        int mid = (l + r) / 2;
        // neu thay
        // neu khong thay
        // neu ben trai
        // neu ben phai
        if (a[mid] == x)
        {
            return true;
        }
        else if (a[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return false;
}

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
    int b[n];
    for (auto &&i : b)
    {
        cin >> i;
    }
    // cout << linearSearch(a, n, 11); // search 11
    // binarysearch
    // cout << BNSearch(b, n, 1); // cout << 0
    cout << binary_search(a, a + n, 14);
    // copy sang vector
    vector<int> v(a, a + n);
    cout << binary_search(v.begin(), v.end(), 14);
    // search
    int u = 0;
    int y = 7;
    cout << binary_search(v.begin() + u, v.begin() + y + 1, 14); //[u,y]

    return 0;
}