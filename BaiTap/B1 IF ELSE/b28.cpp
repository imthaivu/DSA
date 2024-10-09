#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MAXN = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b,c;
    cin>>a>>b>>c;
    double delta = b*b - 4*a*c;
    if(c==0){
        cout << "INF";
    } else {
        if(delta>0){
            cout << fixed << setprecision(2) << (double)(-b+sqrt(delta))/(2*a) << " " << (double)(-b-sqrt(delta))/(2*a);
        } else if(delta==0){
            cout << fixed << setprecision(2) << (double)(-b)/(2*a);
        } else {
            cout << "NO";
        }
    }
    return 0;
}