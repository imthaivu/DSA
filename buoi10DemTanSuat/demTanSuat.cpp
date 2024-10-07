#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
bool checkNT(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        /* code */
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // tao mang khong  biet so luong phan tu
    vector<int> v;
    int tmp;
    while (cin >> tmp)
    {
        if (checkNT(tmp)) // chi them cac so nguyen to
        {
            v.push_back(tmp);
        }
    }
    int b[v.size()] = {0}; // tao mang dem co v.size ptu
    for (int i = 0; i < v.size(); ++i)
    {
        if (b[i] == 0) // neu phan tu chua duoc dem
        {
            int dem = 1;                           // dem ptu do
            for (int j = i + 1; j < v.size(); j++) // dem cac phan tu ke do den het
            {
                if (v[i] == v[j]) // neu xuat hien
                {
                    ++dem;    // dem no
                    b[j] = 1; // danh dau da dem roi
                }
            }
            cout << v[i] << ' ' << "xuat hien " << dem << "lan" << endl;
        }
    }
    return 0;
}