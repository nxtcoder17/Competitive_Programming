#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string transform(string& temp)
{
    string result;
    for (char x: temp)
        result += (char) tolower((int)x);

    return result;
}

int main()
{
    string f;
    string s;

    cin >> f >> s;
    string new_f = transform(f);
    string new_s = transform(s);
    // cout << new_f << " and " << new_s << endl;

    if (new_f < new_s)
        cout << "-1" << endl;
    else if (new_f > new_s)
        cout << "1" << endl;
    else
        cout << "0" << endl;
}
