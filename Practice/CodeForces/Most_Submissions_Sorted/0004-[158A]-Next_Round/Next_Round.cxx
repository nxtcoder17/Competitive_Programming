#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i=0; i < n; i++)
        cin >> arr[i];

    int cutoff = arr[k-1];
    int result = count_if(arr.begin(), 
                            arr.end(),
                            [&cutoff] (int item) {
                                return item > 0 && item >= cutoff;
                            });
    cout << result << endl;
}
