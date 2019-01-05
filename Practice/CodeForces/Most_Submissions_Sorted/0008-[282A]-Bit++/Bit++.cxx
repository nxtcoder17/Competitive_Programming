#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int n;
    cin >> n;

    string s;
    while(n--) {
        cin >> s;
        if (s == "++X" || s == "X++")
            x += 1;
        else
            x -= 1;
    }
    cout << x << endl;
}
