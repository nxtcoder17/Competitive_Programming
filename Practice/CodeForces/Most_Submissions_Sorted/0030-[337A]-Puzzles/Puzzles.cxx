#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 50000;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(m);
    for (int i=0; i < m; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    int min_diff = MAX;
    for (int i=0; i <= m - n; i++)
        min_diff = min(min_diff, arr[i+n-1] - arr[i]);

    cout << min_diff << endl;
}
