#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string result = "";

    for (int i=0; i < s.length(); i++) {
        if (s[i] == '?') {
            if (i < 1)
                s[i] = (s[i+1] != 'a') ? 'a': 'b';
            else if (i == s.length()-1)
                s[i] = (s[i-1] != 'a') ? 'a': 'b';
            else
                s[i] = (s[i-1] != 'a' && s[i+1] !='a') ? 'a': 'b';
        }
    }

    cout << s << endl;
}
