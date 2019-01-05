#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> dict;

    dict["love"] = "I love ";
    dict["hate"] = "I hate ";
    dict["pred"] = "it";
    dict["intermediate"] = "that ";

    int n;
    cin >> n;
    
    bool flag = false;
    string result = "";
    while (n--) {
        if (result != "")
            result += dict["intermediate"];
        if (!flag)
            result += dict["hate"];
        else
            result += dict["love"];
        flag = !flag;
    }
    result += dict["pred"];
    cout << result << endl;
}
