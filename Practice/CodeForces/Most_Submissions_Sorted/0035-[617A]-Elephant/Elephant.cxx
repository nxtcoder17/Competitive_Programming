#include <iostream>
using namespace std;

int main()
{
    int64_t x;
    cin >> x;

    int64_t steps = (x / 5) + (x % 5 != 0 ? 1: 0);
    cout << steps << endl;
}
