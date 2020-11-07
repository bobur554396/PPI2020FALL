#include <iostream>

using namespace std;

void f1(int n){
  for(int i = n; i > 0; i--)
    cout << i << " ";
}

void f2(int n){
  if(n == 0) // -> base case
    return;

  cout << n << " ";
  f2(n - 1);
}
/*
  1) n = 3 => cout << 3 << " "; f2(2)
  2) n = 2 => cout << 2 << " "; f2(1)
  3) n = 1 => cout << 1 << " "; f2(0)
  4) n = 0 => base case => stop execution;
*/
int main(){
  
  int n; // 3
  cin >> n;

  f2(n);

  return 0;
}