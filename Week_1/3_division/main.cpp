#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int main () { 
    int a,b;
    cin >> a >> b ;

    if (b != 0)
    {
       cout << a/b;
    } else {
        cout << "Imposible";
    };
    
   
    return 0;
}