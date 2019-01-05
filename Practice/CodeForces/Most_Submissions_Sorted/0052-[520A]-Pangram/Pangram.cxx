#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    transform(s.begin(), s.end(),
            s.begin(),
            [](char& c) { return tolower(c); });

    set<char> st(s.begin(), s.end());
    // cout << "Size of set:  " << st.size() << endl;
    if (st.size() == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
