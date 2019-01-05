#include <iostream>
using namespace std;

int main()
{
    int64_t n, val, max_count;

    cin >> n;

    cin >> val;
    n--;
    max_count = 1;

    int64_t x;
    int64_t temp_count = 1;
    while(n--) {
        cin >> x;
        if (x >= val)
            temp_count += 1;
        else {
            max_count = max(max_count, temp_count);
            temp_count = 1;
        }
        val = x;
    }

    max_count = max(max_count, temp_count);
    cout << max_count << endl;
}
