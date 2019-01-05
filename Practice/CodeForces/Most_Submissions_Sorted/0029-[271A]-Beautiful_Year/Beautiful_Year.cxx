#include <iostream>
#include <set>
using namespace std;

int main()
{
    int y;
    cin >> y;
    string s = to_string(y);
    set<char> st;

    while (true) {
        y = y+1;
        s = to_string(y);
        st.clear();
        st.insert(s.begin(), s.end());
        if (st.size() == s.length()) {
            cout << s << endl;
            break;
        }
    }
    return 0;
}
