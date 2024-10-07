#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c == 'z' || c == 'Z')
    {
        cout << 'a';
        return 0;
    }

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        if (c >= 'A' && c <= 'Z')
            c += 32;
        cout << (char)(c + 1);
    }
    else
    {
        cout << "INVALID";
    }

    return 0;
}