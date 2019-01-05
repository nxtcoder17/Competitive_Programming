#include <bits/stdc++.h>
#include <utility>
using namespace std;

#define print_container(ct,sep) cout<<*ct.begin();for(auto it=ct.begin()+1; it != ct.end(); it++) cout << sep << *it; cout << endl;
#define MOD (pow(10, 9) + 7)

template <typename T>
string join(vector<T>& arr, char delim)
{
    ostringstream result;
    result << arr[0];
    for (int i=1; i < arr.size(); i++)
        result << delim << arr[i];
    return result.str();
}

vector<string> split(string& s, char delim)
{
    vector<string> arr;
    size_t f = s.find(delim);
    arr.push_back(s.substr(0, f));
    size_t x;
    while ( (x = s.find(delim, f+1)) != string::npos) {
        arr.push_back(s.substr(f+1, x-f-1));
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;

    vector< pair<int, int> > arr;
    int x, y;
    for (int i=0; i < n; i++) {
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }

    // for (int i=0; i < n; i++) {
        // cout << arr[i].first <<  " and " << arr[i].second << endl;
    // }

    int total_count = 0;
    for (int i=0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (arr[i].first == arr[j].second) {
                    total_count += 1;
                    // cout << (i+1) << " and " << (j+1) << endl;
                    // cout << arr[i].first << " and " << arr[j].second << endl;
                }
            }
        }
    }

    cout << total_count << endl;
}

