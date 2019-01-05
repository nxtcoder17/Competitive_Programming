#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>
using namespace std;

#define print_container(ct,sep) cout<<*ct.begin();for(auto it=ct.begin()+1; it != ct.end(); it++) cout << sep << *it; cout << endl;
#define MOD (pow(10, 9) + 7)

#define endl '\n'
#define decimal_places(x, d) int(round(x * pow(10, d))) / double(pow(10, d))

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> result;
    result.push_back(0);
    vector<int> moves(n);
    for (int i=0; i < n; i++) {
        cin >> moves[i];
    }

    int s;
    for (int m: moves) {
        s = result.size();
        for (int i=0; i < s; i++) {
            result.push_back(result[i] - m);
            result[i] += m;
        }
    }

    bool flag = false;
    for (int r: result)
        if (r == 0 || r == 360) {
            flag = true;
            break;
        }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

