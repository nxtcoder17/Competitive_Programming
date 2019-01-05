#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, vector<int>> dict;
    int global_max = 0;
    int temp_max = 0;
    int y;
    int y_min = 100000, y_max = 0;

    vector<int> arr(n+1);
    for (int i=1; i <= n; i++) {
        cin >> y;
        arr[i] = y;
        y_min = min(y_min, y);
        y_max = max(y_max, y);

        dict[y].push_back(1);
    }

    for (int i=y_min; i < y_max; i++) {
        temp_max = dict[i].size();
        global_max = max(global_max, temp_max);
    }
}
