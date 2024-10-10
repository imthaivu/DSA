#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,n,w;
    cin>>k>>n>>w;
    int res =  (w+1)*w/2*k -n;
    if(res>0){
        cout <<res;
    } else {
        cout <<0;
    }
    return 0;
}