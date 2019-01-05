#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string result = "";

    string t = "WUB";
    size_t index = s.find(t);
    if (index != 0) {
        for (int i=0; i < index; i++)
            result += s[i];
        result += " ";
    }

    size_t next_index;
    while (index != string::npos) {
        next_index = s.find(t, index +3);
        // cout << next_index << endl;
        if (next_index != string::npos)
            for (int i=index+3; i < next_index; i++)
                result += s[i];
        else {
            for (int i=index+3; i < s.length(); i++)
                result += s[i];
            break;
        }
        result += (next_index -3 > index) ? " ": "";
        index = next_index;
    }

    cout << result << endl;
}
