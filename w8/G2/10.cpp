#include <iostream>
#include <cmath>

using namespace std;

// base *= base;
// 1) 2 *= 2 => 4
// 2) 4 *= 4 => 16
// 3) 16 *= 16 => 256

// 1) 1 *= 2 => 2
// 2) 2 *= 2 => 4
// 3) 4 *= 2 => 8


/*
2^(-1) = 1 / 2
2^(-3) = 1 / 8
*/

float my_pow(int base, int exp){
  float res = 1;
  if(exp > 0){
    for(int i = 0; i < exp; i++)
      res *= base;
  } else {
    for(int i = exp; i < 0; i++){
      res *= base;
    }
    res = 1 / res;
  }
  return res;
}

float my_pow2(int base, int exp){
  float res = 1;
  for(int i = 0; i < abs(exp); i++)
    res *= base;
  if(exp < 0)
    return 1 / res;
  return res;
}

int main(){
  // 2^3 = 8
  // 2 - base, 3 - exp
  // cout << pow(2, 3) << endl;
  // 2^3 <==> 2 * 2 * 2
  int b, e;
  cin >> b >> e;
  cout << my_pow2(b, e) << endl;

  return 0;
}

