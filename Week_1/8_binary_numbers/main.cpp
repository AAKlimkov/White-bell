#include <string>
#include <iostream>
#include <deque>

using namespace std;

int main() {
    int a;
    cin >> a;

    deque<int> res;

    for (int i = a; i  > 0; i /= 2)
    {
        res.push_front(i%2);
    }
    
    for (int bit : res)
    {
        cout << bit;
    }
    
  
    return 0;
}