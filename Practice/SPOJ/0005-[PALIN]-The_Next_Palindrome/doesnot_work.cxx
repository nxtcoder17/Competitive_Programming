#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int n;
    int i, j;
    // char s[1000001];
    string s;
    while (t--) {
        cin >> s;
        // n = strlen(s);
        n = s.length();

        j = n-1;
        for(i=0; i < n; ++i, --j) {
            if (i != j) {
                if (i+1 == j) {
                    if (s[i] > s[j])
                        s[j] = s[i];
                    else {
                        if (s[i] < '9') {
                            ++s[i];
                            s[j] = s[i];
                        } else {
                            s[i] = '0';
                            s[j] = '0';
                            ++s[i-1];
                            s[j+1] = s[i-1];
                        }
                    }
                    break;
                } else {
                    if (s[i] != s[j])
                        s[j] = s[i];
                }
            }
            else {
                if (s[i] < '9') {
                    ++s[i];
                    // cout << "Value of s[i] = " << s[i] << endl;
                }
                else {
                    s[i] = '0';
                    ++s[i-1];
                    s[i+1] = s[i-1];
                }
                break;
            }
        }

        cout << s << endl;
    }
}
