#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    vector<int> arr(n);
    int w = 0;
    for (int i=0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > h)
            w += 2;
        else
            w += 1;
    }

    cout << w << endl;
}
