#include <iostream>

using namespace std;

void f1(int n){
  for(int i = 1; i <= n; i++)
    cout << i << " ";
}

void f2(int n){
  if(n == 0) // -> base case
    return;
  
  f2(n - 1);
  cout << n << " ";
}
/*
  Stack - LIFO -> last in first out
  1) n = 3 => f2(2) --> store rest of the function in stack [cout << 3;]
  2) n = 2 => f2(1) --> stack [cout << 2; cout << 3;]
  3) n = 1 => f2(0) --> stack [cout << 1; cout << 2; cout << 3;]
  4) n = 0 => base case => stop execution;
*/
int main(){
  
  int n; // 3
  cin >> n;

  f2(n);

  return 0;
}