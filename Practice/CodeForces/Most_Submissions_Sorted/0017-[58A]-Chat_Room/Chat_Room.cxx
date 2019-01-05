#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<int, char> dict;
    int count = 0;
    for (char x: "hello") {
        dict[count] = x;
        count += 1;
    }

    count = 0;
    for (char x: s) {
        if (dict[count] == x)
            count += 1;
    }

    if (count == 5)
        cout << "YES\n";
    else
        cout << "NO\n";
}
