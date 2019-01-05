#include <iostream>
#include <string>

using namespace std;

int main()
{
    string p;
    cin >> p;

    string result="HQ9";
    if (result.find_first_of(p) != string::npos)
        cout << "YES\n";
    else
        cout << "NO\n";
}
