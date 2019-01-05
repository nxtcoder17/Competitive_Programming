#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int c = count_if(s.begin(), s.end(), 
                    [] (char x) {
                        return islower(x);
                    });

    if (c >= s.length()/2.0)
        for(char x: s)
            cout << (char) tolower((int) x);
    else
        for(char x: s)
            cout << (char) toupper((int) x);
    cout << endl;
}
