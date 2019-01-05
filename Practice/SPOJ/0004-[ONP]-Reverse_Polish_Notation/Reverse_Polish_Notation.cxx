#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string s;
    string result;
    vector<char> operator_stack;

    string operators = "+-*/^(";
    unordered_map <char, int> priority;
    priority['+'] = 1;
    priority['-'] = 2;
    priority['*'] = 3;
    priority['/'] = 4;
    priority['^'] = 5;

    char top;
    while (t--) {
        result = "";
        cin >> s;

        operator_stack.clear();
        operator_stack.push_back('(');

        for (auto x: s) {
            if (x == '(')
                operator_stack.push_back(x);
            else if (x == ')') {
                while ((top = operator_stack.back()) && top != '(') {
                    result += top;
                    operator_stack.pop_back();
                }
                operator_stack.pop_back();
            }
            else if (priority[x] == 0)
                result += x;
            else {
                top = operator_stack.back();
                if (priority[x] > priority[top])
                    operator_stack.push_back(x);
                else {
                    while ( (top = operator_stack.back()) &&
                                top != '(' && priority[x] < priority[top]) {
                        result += top;
                        operator_stack.pop_back();
                    }
                    operator_stack.push_back(x);
                }
            }
        }

        cout << result << endl;
    }
}
