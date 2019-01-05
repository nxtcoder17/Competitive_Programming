#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;
    vector<int> arr;

    int adhoc;
    for (int i=0; i < p; i++) {
        cin >> adhoc;
        arr.push_back(adhoc);
    }

    int q;
    cin >> q;
    for (int i=0; i < q; i++) {
        cin >> adhoc;
        arr.push_back(adhoc);
    }

    set<int> st(arr.begin(), arr.end());
    if (st.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;
}
