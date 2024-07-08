#include <iostream>

using namespace std;

void UpdateIfGreater(const int& source, int& destination)
{
    if (source > destination)
    {
        destination = source;
    }
}

int main()
{   
    int source, dest;

    cin >> source >> dest;

    UpdateIfGreater(source, dest);

    cout << source << dest << endl;

    return 0;
}
