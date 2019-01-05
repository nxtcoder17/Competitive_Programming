#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int64_t n;
    cin >> n;

    if (n % 2 == 0)
        cout << (n / 2) << endl;
    else
        cout << (n/2 + (-1)*n) << endl;
}
