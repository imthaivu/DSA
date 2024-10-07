#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code is here
    ll n;
    cin >> n;
    int balance = 0;
    if (n == 0)
    {
        cout << "YES";
    }
    else
    {
        while (n > 0)
        {
            
            // if last of n odd -1
            if (n%10 % 2 == 1)
            {
                --balance;
            }
            // else +1
            else
            {
                ++balance;
            }
            n/=10;
        }
    }
    if(balance==0){
        cout << "YES";
    } else {
        cout <<"NO";
    }

    return 0;
}