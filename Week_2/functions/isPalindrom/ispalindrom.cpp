#include <string>
#include <iostream>

using namespace std;

bool IsPalindrom(const string& str)
{
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());
    return reversed_str == str;
}

string BoolToString(bool value)
{
    return value ? "true" : "false";
}

int main()
{
    string str;
    cin >> str;

    cout << BoolToString(IsPalindrom(str));

    return 0;
}