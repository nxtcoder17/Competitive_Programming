#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int l = s.length();
    for(int i=0; i < l; i++) {
        if (t[i] == s[l-i-1])
            ;
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
