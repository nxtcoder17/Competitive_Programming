#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int r;
    for (int i=0; i < a.length(); i++) {
        r = (a[i] - '0') ^ (b[i] - '0');
        cout << r;
    }
    cout << endl;
}
