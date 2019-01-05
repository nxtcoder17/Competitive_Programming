#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> dict;

    int x;
    for (int i=1; i <= n; i++) {
        cin >> x;
        dict[x] = i;
    }

    for (int i=1; i <= n; i++)
        cout << dict[i] << " ";
    cout << endl;
}
