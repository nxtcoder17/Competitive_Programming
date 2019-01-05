#include <iostream>
#include <string>
#include <cctype>
using namespace std;

const string VOWELS = "AEIOUYaeiouy";

int main()
{
    string input;
    cin >> input;

    string result;
    for (char x: input) {
        if (VOWELS.find(x) != string::npos)
            ;
        else {
            result += '.';
            result += (char) tolower((int) x);
        }
    }
    cout << result << endl;
    return 0;
}
