#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> dict;
    string s;
    int x;

    pair<string, int> winner {"", 0};
    while (n--) {
        cin >> s >> x;
        dict[s] += x;
        if (dict[s] > winner.second)
            winner = {s, dict[s]};
    }

    cout << winner.first << endl;
}
