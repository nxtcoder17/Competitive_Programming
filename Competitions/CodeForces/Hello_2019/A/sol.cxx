#include <bits/stdc++.h>
using namespace std;

#define print_container(ct,sep) cout<<*ct.begin();for(auto it=ct.begin()+1; it != ct.end(); it++) cout << sep << *it; cout << endl;
#define MOD (pow(10, 9) + 7)

#define endl '\n'
#define decimal_places(x, d) int(round(x * pow(10, d))) / double(pow(10, d))

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string org;
    cin >> org;

    vector <string> arr(5);
    for(int i=0; i < 5; i++) {
        cin >> arr[i];
    }

    bool flag = false;
    for (string x: arr) {
        for (int i=0; i < 2; i++) {
            if (x[i] == org[i]) {
                flag = true;
                break;
            }
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}

