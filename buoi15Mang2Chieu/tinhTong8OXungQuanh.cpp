#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};//move 8
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i = 3, j = 4;
    for (int k = 0; k < 8; k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        cout << i1 << ' ' << j1 << endl;
    }

    return 0;
}