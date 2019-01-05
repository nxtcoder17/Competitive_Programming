#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> input_array {7, 8, 9};

    int n = input_array.size();
    for (int num=0; num < (1<<n); num++) {
        for (int i=0; i < n; i++) {
            if (num & (1<<i)) {
                // cout << i << " ";
                cout << input_array[i] << " ";
            }
        }
        cout << endl;
    }
}
