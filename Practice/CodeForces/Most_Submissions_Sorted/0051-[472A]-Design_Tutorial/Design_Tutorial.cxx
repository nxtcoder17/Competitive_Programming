#include <bits/stdc++.h>

bool isPrime(int64_t x)
{
    if (x <= 1)
        return false;

    for (int64_t i=2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;

    return true;
}

int main()
{
    int64_t n;
    cin >> n;

    int64_t other;
    for (int64_t i=4; i <= n/2; i++)
        if (! isPrime(i)) {
            other = n - i;
            if (! isPrime(other)) {
                cout << i << " " << other << endl;
                break;
            }
        }

    return 0;
}
