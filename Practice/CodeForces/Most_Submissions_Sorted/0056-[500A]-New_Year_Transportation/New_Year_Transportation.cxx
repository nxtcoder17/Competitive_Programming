#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> arr(n-1);
    for (int i=0; i < n-1; i++)
        cin >> arr[i];

    int travelled=0;
    for (int i=0; i < t-1; i = travelled) {
        travelled = i + arr[i];
    }

    if (travelled == t-1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
