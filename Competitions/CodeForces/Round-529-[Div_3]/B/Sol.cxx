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

    int64_t n;
    cin >> n;
    vector<int64_t> arr(n);
    for(int i=0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int64_t result = min(arr[n-1] - arr[0], 
                            min(arr[n-2] - arr[0], arr[n-1] - arr[1]));
    cout << result << endl;
}

