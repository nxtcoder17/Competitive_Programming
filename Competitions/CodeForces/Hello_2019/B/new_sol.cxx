#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> moves(n);
    for (int i=0; i < n; i++) {
        cin >> moves[i];
    }

    vector<int> result {360};
    int s = 0;
    bool flag = false;
    for(auto x: moves) {
        s = result.size();
        for (int i=0; i < s; i++) {
            result.push_back( (result[i] - x) % 360 );
            result[i] = (result[i] + x) % 360;
        }
    }

    for (auto r: result) {
        if (r == 0) {
            flag = true;
            break;
        }
    }

    cout << (flag ?  "YES" : "NO" ) << endl;
}
