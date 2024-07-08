#include <string>
#include <iostream>
#include <vector>

using namespace std;

void MoveStrings(vector<string> &source, vector<string> &destination)
{
    for (string word : source)
    {
        destination.push_back(word);
    }

    source.clear();
}

int main()
{

    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    MoveStrings(source, destination);

    for (const string &word : destination)
    {
        cout << word << ' ';
    }

    cout << endl
         << source.size();

    return 0;
}