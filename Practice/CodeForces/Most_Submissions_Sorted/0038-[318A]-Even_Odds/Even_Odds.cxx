#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int64_t n, k;
    cin >> n >> k;

    int64_t result;
    if (k > ceil(n/2.0))
        result = 2 * (k - ceil(n/2.0));
    else
        result = 2 *k - 1;

    cout << result << endl;
}

