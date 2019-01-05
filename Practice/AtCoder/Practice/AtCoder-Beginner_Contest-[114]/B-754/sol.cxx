#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <map>
#include <algorithm>
#include <cstdlib>
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


    string s;
    cin >> s;

    int m = 1000;
    int t;
    for (int i=0; i < s.length()-2; i++) {
        t = stoi(s.substr(i, 3));
        m = min(m, abs(753 - t));
    }
    cout <<  m << endl;
}

