#include <iostream>  // input / output stream

using namespace std; // standart folder

int main(){
  // Variables
  int a; 
  a = 2;

  int b;
  b = 3;

  // [a-zA-Z]
  // _
  // [0-9]
  // 1res - wrong
  // my.result - wrong
  // result1 - ok
  // my_result
  int result;
  result = a + b;

  cout << a << "+" << b << "=" << result << endl;


  // cout << a << "\n" << b << "\n";
  // cout << a;
  // cout << "\n";
  // cout << b;
  // cout << endl;

  return 0;
}
