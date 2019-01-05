#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> dict;
    int x;
    for (int i=0; i < n; i++) {
        cin >> x;
        dict[x] += 1;
    }

    vector<int> v;
    for (auto item: dict)
        if (item.second % 2 == 0)
            ;
        else
            v.push_back(item.first);

    sort(v.begin(), v.end());

    int probs =  0;
    for (int i=0; i < v.size(); i += 2)
        probs += v[i+1] - v[i];

    cout << probs << "\n";
}
