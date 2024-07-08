#include <string>
#include <iostream>

using namespace std;

int Factorial(int i)
{
    if (i <= 1)
    {
        return 1;
    }
    return i * Factorial(i - 1);
}

int main()
{
    int a;
    cin >> a;

    cout << Factorial(a);

    return 0;
}