#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

#define ALL(x) x.begin(), x.end()
int main()
{
    int n;
    int64_t l;
    cin >> n >> l;
    vector<int64_t> arr(n);

    for (int i=0; i < n; i++)
        cin >> arr[i];

    sort(ALL(arr));
    double d = arr[0] - 0;
    for (int i=1; i < arr.size(); i++) {
        d = max(d, (double)(arr[i] - arr[i-1])/2);
    }

    d = max(d, (double)l - arr[n-1]);
    cout << fixed << setprecision(12) << d << endl;
}
