#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    m = min(n, m);
    if (m % 2 == 0)
        cout << "Malvika\n";
    else
        cout << "Akshat\n";
}
