#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    string g, h, m;
    cin >> g >> h >> m;

    unordered_map<char, int> org;
    for_each(g.begin(), g.end(),
            [&org](char& x) { org[x] += 1; });

    for_each(h.begin(), h.end(),
            [&org](char& x) { org[x] += 1; });

    unordered_map<char, int> mixed;
    for_each(m.begin(), m.end(),
            [&mixed](char& x) { mixed[x] += 1; });

    if (org == mixed)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


}
