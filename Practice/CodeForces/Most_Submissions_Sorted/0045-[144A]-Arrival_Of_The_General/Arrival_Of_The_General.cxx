#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n); 
    int max=0, min=0;

    for (int i=0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > arr[max])
            max = i;
        if (arr[min] >= arr[i])
            min = i;
    }

    // cout << "Max: " << max << " and Min: " << min << endl;
    int result = max + (n - 1 - min);
    if (max > min)
        result -= 1;

    cout << result << endl;
}
