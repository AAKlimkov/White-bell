#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int main () { 
    int a,b,c;
    cin >> a >> b >> c;
    double dis = b*b-4*a*c;
   
    if (dis < 0)
    {
        cout << " No answers";
    } else {
        double x1 = (-b + sqrt(dis))/(2*a);
        double x2 = (-b - sqrt(dis))/(2*a);
        if (x1==x2)
            {
                cout<< x1;
            } else {
                cout << x1 << " " << x2;
            };
    
    }
   
   
    return 0;
}