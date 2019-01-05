#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
using namespace std;

string to_binary(int x) 
{
    string s = "";
    while (x != 0) {
        s = to_string(x % 2) + s;
        x /= 2;
    }

    return s;
}

int main()
{
    int n, k;
    cin >> n >> k;

    bitset<32> b(n);

    if (k < b.count() || k > n) {
        cout << "NO" << endl;
        return 0;
    }

    if (k == n) {
        cout << "YES" << endl;
        for(int i=0; i < n; i++)
            cout << 1 << " ";
        cout << endl;
        return 0;
    }

    int index = 0;
    vector<int> result;
    for (auto i = 0; i < b.size(); i++) {
        if (b[i])
            result.push_back(index);
        index += 1;
    }

    // for (int x: result)
        // cout << "Index: " << x << endl;

    int l;
    int element;
    while ((l = result.size()) && l < k) {
        element = result.back();
        result.pop_back();
        result.push_back(element-1);
        result.push_back(element-1);
        sort(result.begin(), result.end());
    }

    cout << "YES" << endl;
    for (int x: result)
        cout << (1<<x) << " ";
    cout << endl;
}
