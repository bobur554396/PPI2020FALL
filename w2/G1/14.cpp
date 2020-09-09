#include <iostream>
#include <cmath>

using namespace std;

int main(){
  // line comment

  /*
  multi
  line 
  comment
  */

  cout << "sqrt(9) = " << sqrt(9) << endl;
  cout << "pow(a, b) => a ^ b = " << pow(2, 3) << endl;
  cout << "abs(n) => |n| = abs(-10) = " << abs(-10) << endl;
  cout << "max(2, 3) = " << max(2, 3) << endl;
  cout << "min(-10, 0) = " << min(-10, 0) << endl;

  double pi = 3.14;

  cout << M_PI << endl;

  cout << "sin(90) = " << sin(90 * M_PI / 180) << endl;

  return 0;
}
