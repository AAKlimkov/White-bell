#include <string>
#include <iostream>

using namespace std;

string IsPalindrom(string str)
{
    string reversed_str = str;
    reverse(str.begin(), str.end());
    return (reversed_str == str) ? "true" : "false";
}

int main()
{
    string str;
    cin >> str;

    cout << IsPalindrom(str);

    return 0;
}