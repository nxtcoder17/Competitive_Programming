#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int64_t n;
    cin >> n;

    unordered_map<int, int> dict;
    int val;
    for(int i=0; i < n; i++) {
        cin >> val;
        dict[val] += 1;
    }

    int64_t min_taxi = dict[4] + dict[3];
    dict[1] -= dict[3];
    min_taxi += dict[2] / 2;

    if (dict[2] % 2 != 0) {
        min_taxi += 1;
        dict[1] -= 2 * 1;
    }
    
    if (dict[1] > 0) {
        min_taxi += dict[1] / 4 + (dict[1] % 4 != 0 ? 1: 0);
    }

    // cout << min_taxi << endl;
    cout << "Minimum Number of Taxis required is : " << min_taxi << endl;
}
