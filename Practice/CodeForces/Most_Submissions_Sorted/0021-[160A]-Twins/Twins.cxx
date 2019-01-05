#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    vector<int> arr(n);
    for(int i=0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr.begin(), arr.end(),
            [] (int a, int b) { return !(a < b); } );

    int temp_sum = 0;
    int count = 0;
    for(int x: arr) {
        count += 1;
        temp_sum += x;
        if (temp_sum > sum /2.0) {
            cout << count << endl;
            break;
        }
    }

    return 0;
}
