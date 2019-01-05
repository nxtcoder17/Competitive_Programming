#include <iostream>
using namespace std;


int main()
{
    int a, b;
    cin >> a >> b;

    int t = a;
    int temp = 0;

    for (int i=0; i < t; i++) {
        temp += 1;
        if (temp == b) {
            temp = 0;
            t += 1;
        }
    }

    cout << t << endl;
}
