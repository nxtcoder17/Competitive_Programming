#include <iostream>
#include <unordered_map>
#include <utility>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> dict;
    int x;
    for (int i=0; i < n; i++) {
        cin >> x;
        dict[x] += 1;
    }
    
    // cout << dict.size() << endl;
    int score = 0;
    pair<int, int> m;
    while (dict.size() != 0) {
        m = {0, 0};
        for (auto x: dict) {
            if (x.second > m.second)
                m = x;
            else if (x.second == m.second)
                if (x.first > m.first)
                    m = x;
        }

        dict.erase(m.first);
        dict.erase(m.first-1);
        dict.erase(m.first+1);

        score += m.first * m.second;
        // cout << "Size of Dict: " << dict.size() << endl;
    }
    cout << score << endl;
}
