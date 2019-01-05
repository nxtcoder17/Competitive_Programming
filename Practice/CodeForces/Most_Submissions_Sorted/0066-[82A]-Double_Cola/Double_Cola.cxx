#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    int64_t n;
    cin >> n;
    queue<string> q({"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"});

    string x;
    int count = 1;
    while (count != n) {
        x = q.front();
        q.pop();
        q.push(x);
        q.push(x);
        count += 1;
    }

    cout << q.front() << endl;
}
