#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int64_t n;
    cin >> n;

    string s = to_string(n);
    int c = count_if(s.begin(), s.end(),
                    [] (char x) {
                        return x == '4' || x == '7';
                    });

    string str_c = to_string(c);
    int r_c = count_if(str_c.begin(), str_c.end(),
                        [] (char x) {
                            return (x != '4' && x != '7');
                        });

    // cout << "str_c = " << str_c << endl;
    // cout << "r_c = " << r_c << endl;

    if (r_c == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

