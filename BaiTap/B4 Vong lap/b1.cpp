#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7;
// ham check so nguyen to
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1; //
}
// ham tinh tong
int sumDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10; // chu so cuoi cung
        n /= 10;       // xoa chu so cuoi cung
    }
    return sum;
}
// ham kiem tra tung ki tu so la so nguyen to
bool isPrimeOfDigits(int n)
{

    while (n > 0)
    {
        if (!isPrime(n % 10))
        {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code is here
    int a, b;
    cin >> a >> b; // hai doan can check nguyen to
    int countPrime = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i) && isPrimeOfDigits(i) && isPrime(sumDigits(i)))
        {
            countPrime++;
        }
    }
    cout << countPrime;
    return 0;
}