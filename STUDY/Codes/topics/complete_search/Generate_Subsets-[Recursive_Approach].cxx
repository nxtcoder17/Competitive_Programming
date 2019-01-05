#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> input_array {0, 1, 2};

void search(int k, set< set<int> >& subset)
{
    if (k == input_array.size())
        return ;
    else {
        set<int> *t = nullptr;
        for(auto x: subset) {
            t  = new set<int>(x.begin(), x.end());
            t->insert(input_array[k]);
            subset.insert(*t);
            delete t;
        }
        t = new set<int>{input_array[k]};
        subset.insert(*t);
        delete t;
        search(k+1, subset);
    }
}

int main()
{
    set< set<int> > subset;
    search(0, subset);

    cout << "Size of Powerset: " << subset.size() << endl;
    for (auto x: subset) {
        for_each(x.begin(), x.end(), [](int a) { cout << a << ", "; });
        cout << endl;
    }
}
