#include <iostream>
#include <unordered_map>
using namespace std;

int64_t factorial(int x, unordered_map<int, int>& dict)
{
    if (dict[x] != 0)
        return dict[x];
    else {
        dict[x] = x * factorial(x-1, dict); return dict[x]; } }

int hcf(int n, int d) {
    int dividend = n;
    int divisor = d;

    int r = dividend % divisor;
    if (r == 0)
        return divisor;
    else {
        return hcf(divisor, r);
    }
}

int main()
{
    unordered_map<int, int> dict;
    dict[0] = 1;
    dict[1] = 1;

    int n;
    cin >> n;

    // debug
    // cout << factorial(n, dict) << endl;

    int64_t fact;
    int total = 0;
    int nr, dr;
    int multiplier;

    for (int i=2; i <= n; i++) {
        multiplier = 2;
        fact = factorial(i, dict);
        nr = 1; dr = fact;
        cout << " For n = " << i << endl;
        while (nr / dr == 0) {
            if (hcf(nr, dr) == 1) {
                total += 1;
                cout << "Nr: " << nr << " and Dr: " << dr << endl;
            }
            nr = 1 * multiplier;
            dr = fact / multiplier;
            multiplier += 1;
            if (nr * dr != fact)
                break;
        }
    }
    cout << total << endl;
}
