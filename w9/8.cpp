#include <iostream>

using namespace std;

int f1(int a, int n){
  int k = 1;
  for(int i = 0; i < n; i++)
    k *= a;
  
  // 2^3
  // k = 1 * 2 * 2 * 2
  return k;
}

int f2(int a, int n){
  if(n == 0)
    return 1;
  return a * f2(a, n - 1);
}
/*
  1) f2(2, 3) => 2 * f2(2, 2); => 2 * 2 * 2 * 1
  2) f2(2, 2) => 2 * f2(2, 1); => 2 * 2 * 1
  3) f2(2, 1) => 2 * f2(2, 0); => 2 * 1
  4) f2(2, 0) => 1
*/

int main(){
  int a, n; 
  cin >> a >> n;
  
  // 2^3 = 8
  cout << f1(a, n) << endl << f2(a, n) << endl;
  

  return 0;
}