#include <iostream>

using namespace std;

int main(){

  // ++, -- (pre, post) - (increment, decerment)
  int a = 2;
  // a++; // <=> a = a + 1;
  // a--; // <=> a = a - 1;
  // ++a; // <=> a = a + 1;
  // --a; // <=> a = a - 1;

  // int b = a++; //
  // int b = ++a; //
  
  // int b = ++++a; // ++ (++a) = ++ (a + 1)
  // cout << a << " " << b << endl;

  // +=, -=, *=, /=, %=
  a += 10; // a = a + 10;

  cout << a << endl;



  return 0;
}