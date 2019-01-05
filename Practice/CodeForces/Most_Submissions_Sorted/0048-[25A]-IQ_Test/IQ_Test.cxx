#include <iostream>
using namespace std;

#define cond(x,y) x % 2 == y % 2

int main()
{
    int n;
    cin >> n;

    int x, y, z;
    cin >> x >> y;
    bool xy = x % 2 == y % 2;
    for (int i=2; i < n; i++) {
        cin >> z;
        if (xy) {
            if (cond(y,z))
                continue;
            else {
                cout << (i+1) << endl;
                break;
            }
        } else {
            if (cond(y,z)) {
                cout << 1 << endl;
                break;
            }
            else {
                cout << 2 << endl;
                break;
            }
        }
    }

    return 0;
}
