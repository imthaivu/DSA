#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll result;
    if (n % 2 == 0)
    {
        result = n / 2;
    }
    else
    {
        result = -(n + 1) / 2;
    }

    cout << result << endl;
    return 0;
}
