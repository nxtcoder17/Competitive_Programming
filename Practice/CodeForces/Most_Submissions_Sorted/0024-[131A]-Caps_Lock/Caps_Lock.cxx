#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = s;
    int c = count_if(s.begin() +1, s.end(),
                    [](char x) {
                        return (int) x >= 65 && (int) x <= 90;
                    });

    if (c == s.length() -1) {
        if ((int) s[0] >= 65 && (int) s[0] <= 90)
            result = tolower(s[0]);
        else
            result = toupper(s[0]);

        for (int i=1; i < s.length(); i++)
            result += tolower(s[i]);
    }

    cout << result << endl;
}
