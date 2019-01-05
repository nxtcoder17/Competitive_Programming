#include <iostream>
using namespace std;

int main()
{
    int64_t s, n;
    cin >> n >> s;

    if (s <= n)
        cout << 1 << endl;
    else {
        int64_t num = s / n + (s % n != 0 ? 1: 0);
        cout << num << endl;
    }
}
