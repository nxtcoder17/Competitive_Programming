#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int result;
    result = max(a*b*c, a*(b+c));
    result = max(result, (a+b)*c);
    result = max(result, a+b+c);

    cout << result << endl;
}
