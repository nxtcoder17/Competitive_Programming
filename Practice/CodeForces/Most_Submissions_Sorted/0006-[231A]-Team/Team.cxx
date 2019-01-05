#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int count = 0;
    int p, v, t;
    int temp;
    while (n--) {
        cin >> p >> v >> t;
        temp = 0;
        temp += ( p == 1 ? 1: 0);
        temp += ( v == 1 ? 1: 0);
        temp += ( t == 1 ? 1: 0);
        if (temp >= 2)
            count += 1;
    }
    cout << count << endl;
}
