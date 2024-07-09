#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool IsPalindrom(const string &str)
{
    string reversed_str = str;
    reverse(str.begin(), str.end());
    return reversed_str == str;
}

vector<string> PalindromFilter(const vector<string> &input, int length)
{
    vector<string> result;
    for (const string &word : input)
    {
        if (word.size() > length && IsPalindrom(word) )
        {
            result.push_back(word);
        }
    }

    return result;
}

int main()
{
    vector<string> input = {"weew", "bro", "code", "x", "xxx", "teeet"};
    int length = 3;

    for (const string word : PalindromFilter(input, length))
    {
        
        cout << word << ' ';
    }

    return 0;
}