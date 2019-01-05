#include <iostream>
using namespace std;

int main()
{
    int64_t n, m, a;
    cin >> n >> m >> a;

    int64_t l = n/a + (n % a == 0 ? 0 : 1);
    int64_t b = m/a + (m % a == 0 ? 0 : 1);

    cout << ( l * b ) << endl;
    return 0;
}
