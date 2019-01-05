#include <iostream>
#include <string>
using namespace std;

#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    int total_days = 0;
    int temp = 0;
    int diff;
    for (int i=0; i < n; i++) {
        diff = (int)t[i] - (int)s[i];
        diff += (diff < 0) ? 26: 0;

        while(diff != 0) {
            if (diff >= 13) {
                temp += 1;
                diff = diff % 13;
            } else {
                temp += 1;
                diff -= 1;
            }
        }
        total_days = max(total_days + temp, temp);
        temp = 0;
    }
    cout << total_days << endl;
}
