#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int t;
    for (int i=1; i <= 5; i++) {
        for (int j=1; j <= 5; j++) {
            cin >> t;
            if (t == 1) {
                cout << (abs(j - 3) + abs(i-3)) << endl;
                return 0;
            }
        }
    }
}
