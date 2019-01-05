#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    int s, n;
    cin >> s >> n;
    int x, y;
    vector< pair<int, int> > v_pair;
    for (int i=0; i < n; i++) {
        cin >> x >> y;
        v_pair.push_back(make_pair(x, y));
    }

    sort(v_pair.begin(), v_pair.end(),
        [](auto a, auto b) {
            if (a.first == b.first) {
                return a.second < b.second;
            } else
                return a.first < b.first;
        });

    for (auto enemy: v_pair) {
        if (s > enemy.first)
            s += enemy.second;
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
}
