#include <iostream>
#include <sstream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string s_set = s.substr(1, s.length()-2);
    // cout << s_set << endl;
    if (s_set.length() != 0) {
        istringstream ist(s_set);
        // cout << ist.str() << endl;

        vector<char> arr;
        int pre=0, x;
        while ((x = s_set.find(", ", pre)) != string::npos) {
            arr.push_back(s_set[x-1]);
            pre = x+2;
        }
        arr.push_back(s_set[s_set.length()-1]);

        set<char> st(arr.begin(), arr.end());
        cout << st.size() << endl;
    } else {
        cout << 0 << endl;
    }
}
