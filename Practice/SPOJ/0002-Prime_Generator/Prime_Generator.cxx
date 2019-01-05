#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if (x <= 1)
        return false;

    for (int i=2; i*i <= x; i++)
        if (x % i == 0)
            return false;

    return true;
}

int main()
{
    int t;
    cin >> t;

    int m, n;
    while (t--) {
        cin >> m >> n;
        for(int i=m; i <= n; i++)
            if (isPrime(i))
                cout << i << endl;
        cout << endl;
    }
}
