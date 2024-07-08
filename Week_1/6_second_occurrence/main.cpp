#include <string>
#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a ;
    int count = 0;

    for (int i = 0; i < a.size(); i++) {
      
        if (a[i] == 'f') {
            count++;
            if (count == 2)
            {
               cout << i;
               return 0;
            }
            
        }
    }
   if (count == 0) {
        cout << -2;
    } else if (count == 1) {
        cout << -1;
    }
      
    return 0;
}