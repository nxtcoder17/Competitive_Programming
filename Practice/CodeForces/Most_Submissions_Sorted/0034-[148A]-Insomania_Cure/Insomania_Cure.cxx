#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int k, l, m, n;
    cin >> k >> l >> m >> n;
    int64_t d;
    cin >> d;

    unordered_map<int64_t, bool> dict;
    for (int64_t i=1; i <= d; i++)
        dict[i] = false;

    int64_t total = 0;
    for (int64_t i=1; i <= d; i++) {
        if (!dict[i]) {
            if (i % k == 0) {
                total += 1;
                dict[i] = true;
            }
            else if(i % l == 0) {
                total += 1;
                dict[i] = true;
            }
            else if (i % m == 0) {
                total += 1;
                dict[i] = true;
            }
            else if (i % n == 0) {
                total += 1;
                dict[i] = true;
            }
        }
    }

    cout << total << endl;

}
