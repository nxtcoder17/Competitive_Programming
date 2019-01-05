#include <iostream>
using namespace std;

int main()
{
    int k, w;
    int64_t n;

    cin >> k >> n >> w;

    int64_t total_cost = w*(w+1)/2 * k;
    // cout << "Total Cost: " << total_cost << endl;
    if (n >= total_cost)
        cout << 0 << endl;
    else
        cout << (total_cost - n) << endl;
}
