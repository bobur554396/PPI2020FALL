#include <iostream>

using namespace std;

int main(){
  int a, b, c;

  a = 2;

  b = 3;

  // b = a; // a = 2; b = 2;
  // a = 4; 

  c = a;
  
  a = b; 

  b = c; 
  

  cout << a << " " << b << endl;



  return 0;
}
