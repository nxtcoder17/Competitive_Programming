#include <iostream>
using namespace std;

int main()
{
    int64_t n;
    cin >> n;

    int64_t groups = 1;
    string x;
    cin >> x;
    n--;

    string y;
    while(n--) {
        cin >> y;
        if (y == x)
            ;
        else
            groups += 1;
        x = y;
    }

    cout << groups << endl;
}
