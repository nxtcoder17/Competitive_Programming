#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int total_count = 0;
    string str;
    string adhoc = "753";
    for(int i=357; i <= x; i++) {
        str = to_string(i);
        if(adhoc.find_first_not_of(str)== string::npos)
            total_count += 1;
    }
    cout << total_count << endl;
}
