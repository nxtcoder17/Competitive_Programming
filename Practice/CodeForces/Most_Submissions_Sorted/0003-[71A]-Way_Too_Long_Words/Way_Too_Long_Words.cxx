#include <iostream>
#include <string>

using namespace std;

int main()
{
    short n;
    cin >> n;

    string s;
    while (n--) {
        cin >> s;
        // cout << *s.begin() << s.length() << *(s.end() - 1) << endl;
        if (s.length() > 10)
            cout << s.front() << (s.length()-2) << s.back() << endl;
        else
            cout << s << endl;
    }

    return 0;
}
