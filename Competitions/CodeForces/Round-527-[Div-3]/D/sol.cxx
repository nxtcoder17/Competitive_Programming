#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int64_t n;
    cin >> n;
    vector<int64_t> A(n);
    for (int i=0; i < n; i++)
        cin >> A[i];

    int64_t l = 0;
    bool possible = false;
    for (int64_t i=n-2; i >= 0; i--) {
        if ( (A[i+1] - A[i]) % 2 == 0) {
            l = max(max(A[i+1], A[i]), l);
            possible = true;
        }
        else {
            for (int64_t j=i-1; j >= 0; j--) {
                if (A[j] == A[j+1]) {
                    possible = true;
                    l = max(max(A[i+1], A[i]), l);
                    A[j] = l;
                    i = j;
                    break;
                } else
                    possible = false;
            }
        }

        if (!possible)
            break;
    }

    if (possible)
        cout << "YES\n";
    else
        cout << "NO\n";
}
