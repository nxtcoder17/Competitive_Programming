#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

template <typename T>
string join(vector<T>& arr, char delim)
{
    ostringstream result;
    result << arr[0];
    for (int i=1; i < arr.size(); i++)
        result << delim << arr[i];
    return result.str();
}

int main()
{
    string s;
    cin >> s;
    istringstream iss(s);
    vector<int> arr;
    while (getline(iss, s, '+')) {
        arr.push_back(stoi(s));
    }
    sort(arr.begin(), arr.end());
    cout << join<int>(arr, '+') << endl;
}
