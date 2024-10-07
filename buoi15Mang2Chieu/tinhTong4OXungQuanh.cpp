#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
// di chuyen
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};//move 4
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int i = 3, j = 4;           // toa do diem can xet
    for (int k = 0; k < 4; k++) // so 4 tuong chung 4 o xung quanh
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        cout << i1 << ' ' << j1 << endl;
    }

    return 0;
}