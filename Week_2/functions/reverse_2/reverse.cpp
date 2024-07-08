#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> Reversed(vector<int> source)
{
    reverse(source.begin(), source.end());
    return source;
}

int main()
{

    vector<int> source = {1, 3, 2, 4};
    vector<int> reversed = Reversed(source);

    for (const int &number : reversed)
    {
        cout << number << ' ';
    }

    return 0;
}