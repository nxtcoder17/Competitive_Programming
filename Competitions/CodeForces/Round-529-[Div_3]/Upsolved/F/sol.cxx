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

    int n, m;
    cin >> n >> m;

    int64_t sum = 0;
    vector< vector<bool> > adj_matrix(n, vector<bool>(n, false));

    vector<int64_t> name(n);
    for (int i=0; i < n; i++)
        cin >> name[i];

    int x, y, w;
    for (int i=0; i < m; i++) {
        cin >> x >> y >> w;
        sum += min(w, name[x-1] + name[y-1]);
        adj_matrix[x-1][y-1] = true;
        adj_matrix[y-1][x-1] = true;
    }

    for (int x=0; x < n; x++) {
        for (int y=0; y < n; y++) {
            if (!adj_matrix[x-1][y-1]) {
                sum += name[x-1] + name[y-1];
                adj_matrix[x-1][y-1] = true;
                adj_matrix[y-1][x-1] = true;
            }
        }
    }

    cout << sum << endl;
}

