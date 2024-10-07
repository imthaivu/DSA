#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "cu      auoc    bhai";
    string word;
    vector<string> vS;
    stringstream ss(s); // tach duoc cac ki tu ra khoi theo dau ' '
    while (ss >> word)
    {
        vS.push_back(word);
    }
    sort(vS.begin(), vS.end());
    for (auto &&i : vS)
    {
        cout << i << " ";
    }
    // tach ky tu theo dau /
    string s2 = "vu/quoc/thai";
    stringstream ss2(s2);
    while (getline(ss2, word, '/'))
    {
        cout << word << " ";
    }
//neu thay cac cai co nhieu dau %$#@ -->thay ve dau " " rồi getline
    return 0;
}