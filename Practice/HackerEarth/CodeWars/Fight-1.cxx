#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    int64_t a, b, m;
    int64_t s, e, c;
    while(t--) {
        c = 0;
        cin >> a >> b >> m;
        s = a/m;
        e = b/m;
        c = e - s;
        c += (a % m == 0) ? 1: 0;

        cout << c << endl;
    }
}
