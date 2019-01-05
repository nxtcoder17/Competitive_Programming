#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int64_t n, m;
    cin >> n >> m;

    int64_t p, t;
    cin >> p;

    int64_t total = (p-1);
    for (int i=1; i < m; i++) {
        cin >> t;
        if (t >= p)
            total += t-p;
        else
            total += (n-p) + t;
        p = t;
    }

    cout << total << endl;
}
