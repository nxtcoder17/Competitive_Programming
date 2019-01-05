#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.find("1111111") != string::npos || s.find("0000000") != string::npos)
        cout << "YES\n";
    else
        cout << "NO\n";
}
