#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        /* code */
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t, n;
    cout << "Nhap t: ";
    cin >> t;
    cout << "Nhap n: ";
    cin >> n;

    auto start_total = high_resolution_clock::now();

    vector<int> primes;
    for (int i = 2; i <= n; ++i)
    {
        if (isPrime(i))
            primes.push_back(i);
    }

    int count = 0;
    for (int i = 0; i < primes.size(); ++i)
    {
        for (int j = i; j < primes.size(); ++j)
        {
            if (primes[i] + primes[j] == n)
            {
                cout << primes[i] << " " << primes[j] << endl;
                ++count;
            }
            if (count == t)
                break;
        }
        if (count == t)
            break;
    }

    auto stop_main = high_resolution_clock::now();
    auto duration_main = duration_cast<microseconds>(stop_main - start_total);
    cout << "Thoi gian: " << duration_main.count() / 1e6 << " giay" << endl;

    return 0;
}
