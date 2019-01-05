#include <iostream>
#include <set>

using namespace std;

int main()
{
    int64_t x;
    set<int64_t> st;
    for (int i=1; i<=4; i++) {
        cin >> x;
        st.insert(x);
    }

    cout << (4 - st.size()) << endl;
}
