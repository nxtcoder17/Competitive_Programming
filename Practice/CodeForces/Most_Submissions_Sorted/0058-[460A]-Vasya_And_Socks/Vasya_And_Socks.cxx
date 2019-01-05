#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;

    int count = 0;
    vector<bool> arr(n, true);
    for (int i=0; i < arr.size(); i++) {
        count += 1;
        if (count == m) {
            arr.push_back(true);
            count = 0;
        }
    }

    cout << arr.size() << endl;
}
