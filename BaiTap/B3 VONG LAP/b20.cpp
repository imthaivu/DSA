#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arrMC[n][2];
    int chiSo = 0; // chi so
    for (int i = 0; i < n; i++)
    {
        cin >> arrMC[i][0]; // nhap Mishka
        cin >> arrMC[i][1]; // nhap Chris
        if (arrMC[i][0] > arrMC[i][1])
        {
            chiSo++;
        }
        else if (arrMC[i][0] < arrMC[i][1])
        {
            chiSo--;
        }
    }
    // tinh ket qua
    if (chiSo == 0)
    {
        cout << "Friendship is magic! ^^";
    }
    else if (chiSo < 0)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Mishka";
    }

    return 0;
}