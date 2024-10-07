#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn = 10000000;
const int MOD = 1000000000 + 7; // snt, bao toan tinh chat modulo
// de quy don gian
int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// de quy nhieu nhanh
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// de quy duoi
int factorial_tail(int n, int acc = 1)
{
    if (n <= 1)
        return acc;
    return factorial_tail(n - 1, n * acc);
}

// gian tiep
void functionB(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        functionA(n - 1);
    }
}
void functionA(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        functionB(n - 2);
    }
}
// long nhau
int nestedRecursion(int n)
{
    if (n > 100)
        return n - 10;
    return nestedRecursion(nestedRecursion(n + 11));
}
// tuyen tinh
int sumArray(int arr[], int n)
{
    if (n <= 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}