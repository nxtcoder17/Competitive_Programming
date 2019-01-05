#include <iostream>
using namespace std;

#define endl '\n'

int main()
{
    int x;
    while ((cin >> x) && x != 42) {
        cout << x << endl;
    }
}
