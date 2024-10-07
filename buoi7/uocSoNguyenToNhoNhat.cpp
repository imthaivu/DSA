#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000;
int nt[maxn + 1];
void sang()
{
    // cho cac so la so nguyen to min
    for (int i = 1; i <= 100000; i++)
    {
        /* code */
        nt[i] = i;
    }
    for (int i = 2; i <= sqrt(100000); i++)
    {
        /* neu la so nguyen to */
        if (nt[i] == i)
        {
            for (int j = i * i; j <= 100000; j += i)
            {
                if (nt[j] == j)
                    nt[j] = i; // uoc nguyen to nho nhat la i
            }
        }
    }
}
int main()
{
    long long a, b;

    cin >> a;
    cin >> b;
    return 0;
}