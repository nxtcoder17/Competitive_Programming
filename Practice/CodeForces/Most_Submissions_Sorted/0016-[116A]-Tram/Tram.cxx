#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int max_count = 0;
    int a, b;
    int temp = 0;
    while (n--) {
        cin >> a >> b;
        temp = (temp != 0 ? temp - a: 0) + b;
        if (temp > max_count)
            max_count = temp;
    }

    cout << max_count << endl;
}
