#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    bool flag = false;
    for (int i=0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j=0; j < m; j++)
                cout << "#";
            cout << endl;
        }
        else {
            if (!flag) {
                for (int t=1; t <= m-1; t++)
                    cout << ".";
                cout << "#" << endl;
            } else {
                cout << "#";
                for (int t=1; t <= m-1; t++)
                    cout << ".";
                cout << endl;
            }
            flag = !flag;
        }
    }
}
