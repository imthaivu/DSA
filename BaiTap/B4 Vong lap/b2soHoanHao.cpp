#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
bool isSoHoanHao(int n)
{
    // n>=2;
    if (n < 2)
        return false;
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i)
            {
                sum += n / i;
            }
        }
    }
    return sum == n;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // nhap doan a b
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isSoHoanHao(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}