#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>
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

    int n;
    cin >> n;
    string s;
    cin >> s;

    int index = 1;
    string result = "";
    for (int i=0; i < n; i+=index) {
        result += s[i];
        index += 1;
    }
    cout << result << endl;

}

