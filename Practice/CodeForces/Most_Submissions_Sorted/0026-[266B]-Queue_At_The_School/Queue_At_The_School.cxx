#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    char s[n+1];
    cin >> s;

    char x;
    while (t--) {
        for (int i=0; i < n -1; i++) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                x = s[i];
                s[i] = s[i+1];
                s[i+1] = x;
                i += 1;
            }
        }
    }

    cout << s << endl;
}
