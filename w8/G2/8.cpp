#include <iostream>

using namespace std;

int res; // global variable

int sum(int a, int b){
  int local_res = a + b; // local variable
  return local_res;
}

void sum2(int a, int b){
  res = a + b;
  // local_res -- wrong
}

int main(){

  sum2(2, 3);
  cout << res << endl;
  // cout << local_res << endl; // local_res -- wrong
  // int res = sum(2, 3);
  // cout << sum(2, 3) << endl;
  
  return 0;
}

