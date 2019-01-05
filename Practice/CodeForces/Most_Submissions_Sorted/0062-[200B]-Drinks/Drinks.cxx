#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double sum = 0;
    double x;
    for (int i=0; i < n; i++) {
        cin >> x;
        sum += x/100;
    }

    double result = sum / n * 100;
    // cout << setprecision(12) << result << endl;
    cout << std::fixed << setprecision(12) << result << endl;
}
