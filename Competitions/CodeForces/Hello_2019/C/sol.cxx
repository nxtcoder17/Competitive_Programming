#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define print_container(ct,sep) cout<<*ct.begin();for(auto it=ct.begin()+1; it != ct.end(); it++) cout << sep << *it; cout << endl;
#define MOD (pow(10, 9) + 7)

#define endl '\n'
#define decimal_places(x, d) int(round(x * pow(10, d))) / double(pow(10, d))

bool check_valid(string& s)
{
    bool flag = true;
    int open = 0, close = 0;
    for (int i=0; i < s.length(); i++) {
        if (s[i] == '(')
            open += 1;
        else
            close += 1;
        if (close > open) {
            flag = false;
            break;
        }
    }
    if (open != close)
        flag = false;

    return flag;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i=0; i < n; i++) {
        cin >> arr[i];
    }

    string result;
    int total = 0;

    unordered_map<string, pair<int, int> > dict;

    for (int i=0; i < arr.size(); i++) {
        for (int j=0; j != i && j < arr.size(); j++) {
            result = arr[i] + arr[j];
            if (check_valid(result)) {
                // cout << arr[i] << " and " << arr[j] << endl;
                bool flag = false;
                if (dict[arr[i]].first == 0) {
                    dict[arr[i]] = {1, i};
                    flag = true;
                }
                if (dict[arr[j]].first == 0) {
                    dict[arr[j]] = {1, j};
                    flag = true;
                }

                if (!flag) {
                    if (i == dict[arr[i]].second)
                        dict[arr[i]].first += 1;

                    if (j == dict[arr[j]].second)
                        dict[arr[j]].first += 1;
                }

                if (dict[arr[i]].first == 2)
                    arr.erase(arr.begin() + i);
                if (dict[arr[j]].first == 2)
                    arr.erase(arr.begin() + j);
                total += 1;
            }
        }
    }

    cout << total << endl;
}

