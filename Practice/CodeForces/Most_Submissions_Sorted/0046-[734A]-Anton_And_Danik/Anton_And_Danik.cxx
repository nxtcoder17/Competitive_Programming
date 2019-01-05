#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int64_t n;
    cin >> n;

    string s;
    cin >> s;

    int64_t c = count_if(s.begin(), s.end(),
                    [] (char x) {
                        return x == 'A';
                    });

    if (c > n/2.0)
        cout << "Anton\n";
    else if (c < n/2.0)
        cout << "Danik\n";
    else
        cout << "Friendship\n";
}
