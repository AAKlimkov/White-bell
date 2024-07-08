#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int main () { 
    double a,b,c,d,e;
    cin >> a >> b >>c>>d >> e;

    if (a > c)
    {
       cout << a * (100 - e) /100;
    } else {
        if (a > b)
        {
            cout << a * (100 - d) /100;
        } else {
            cout << a;
        }
        
    };
    
   
    return 0;
}