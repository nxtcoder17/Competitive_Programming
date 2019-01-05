#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isLucky(int x)
{
    string s = to_string(x);
    int c = count_if(s.begin(), s.end(),
                    [](char x) {
                        return (x != '4' && x != '7');
                    });
    if (c == 0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;

    if (isLucky(n)) {
        cout << "YES\n";
        return 0;
    }
    else {
        for (int i=1; i <= n; i++) {
            if (isLucky(i) && n % i == 0) {
                cout << "YES\n";
                return 0;
            }
        }
    }

    cout << "NO\n";
    return 0;
}
