#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int soVong;
    cin >> soVong;
    int soDiem = 0;
    for (int i = 0; i < soVong; i++)
    {
        int mi,ci;
        cin >> mi >> ci;
        if (mi > ci)
        {
            soDiem++;
        }
        else if (mi < ci)
        {
            soDiem--;
        }
    }
    if (soDiem > 0)
    {
        cout << "Mishka";
    }
    else if (soDiem < 0)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
    
    return 0;
}