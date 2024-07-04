#include <string>
#include <iostream>
using namespace std;

int main () { string a,b,c;
 cin >> a >> b >> c;

//  if (a < b ){
//   if (a < c )  {
//   cout << a;
//   }
//   else {
//     cout << c;
//   }
//  } else {
//   if (b < c) {
//      cout << b;
//   }
//    else {
//     cout << c;
//    };
//  };
string smallest = min({a, b, c});

cout << smallest;

  return 0;
}
