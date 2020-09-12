#include <iostream>
#include <cmath>

using namespace std;

int main(){
  // |(or), ^(xor), &(and), >>, <<, |=, &=, ^=, ~
  /*
  Task: get result for n: 2^n
  */

  int n, a;
  cin >> n;

  // cout << pow(2, n) << endl;

  a = (1 << n); // shift left

  cout << a << endl;

  return 0;
}