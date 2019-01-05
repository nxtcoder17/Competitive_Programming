#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int m1;
    int m2;

    int n;
    cin >> n;

    vector<int> arr(n);
    int ts, te, s, e;
    ts = te = s = e = 0;
    int temp = 0;
    int global = 0;
    for (int i=0; i < n; i++) {
        cin >> arr[i];
        temp = max(arr[i], temp * arr[i]);

        if (temp == arr[i])
            ts = i;
        else
            te = i;

        if (temp > global) {
            global = temp;
            s = ts;
            e = te;
        }
    }

    cout << " Start: " << s <<  " and " << e << endl;
    vector<int> v;
    for (int i=s; i <= e; i++)
        v.push_back(arr[i])
    sort(v.begin(),v.end());
    int64_t pr = v[n-1] * v[n-2];
    cout << pr << endl;
}
