#include <string>
#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int> &source)
{
    reverse(source.begin(), source.end());
}

int main()
{

    vector<int> source = {1, 3, 2};
    Reverse(source);

    for (const int &number : source)
    {
        cout << number << ' ';
    }

    return 0;
}