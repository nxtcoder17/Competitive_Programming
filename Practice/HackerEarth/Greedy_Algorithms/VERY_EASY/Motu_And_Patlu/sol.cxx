#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    int n;
    vector<int> arr(n);
    int motu, patlu;
    int p, m;
    int i, j;

    while(t--) {
        motu = 0; patlu = 0;
        m = 0;  p = 0;

        cin >> n;
        for (i=0; i < n; i++)
            cin >> arr[i];

        j = n-1;
        i = 0;
        p = arr[j];
        m = arr[i];

        while (i+1 != j) {
            while (m <  2 * p) {
                if (i+1 == j)
                    break;
                else
                    i += 1;
                m += arr[i];
            }

            while (2*p < m) {
                if (j-1 == i)
                    break;
                else
                    j-=1;
                p += arr[j];
            }
        }

        motu = i+1;
        patlu = n - motu;
        cout << motu << " " << patlu << endl;

        if (motu > patlu)
            cout << "Motu" << endl;
        else if(motu < patlu)
            cout << "Patlu" << endl;
        else
            cout << "Tie" << endl;
    }
}
