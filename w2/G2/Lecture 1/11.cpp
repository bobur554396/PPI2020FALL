#include <iostream>
#include <cmath>

using namespace std;

int main(){

  // sqrt, abs, sin, max, min, pow

  cout << "sqrt(9) = " << sqrt(9) << endl;
  cout << "abs(-9) => |-9| = " << abs(-9) << endl;
  cout << "max(2, 3) = " << max(2, 3) << endl;
  cout << "min(-8, 0) = " << min(-8, 0) << endl;
  cout << "pow(2, 3) => 2^3 =" << pow(2, 3) << endl;

  double pi = 3.14;

  double rad = 90 * M_PI / 180;
  double rad2 = 45 * M_PI / 180;

  cout << "sin(90) = " << sin(rad) << endl;

  // int(0.000000000000000000612323) ~= 0
  cout << "cos(90) = " << cos(rad) << endl;
  cout << "tan(45) = " << tan(rad2) << endl;

  return 0;
}
