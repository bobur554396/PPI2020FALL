#include <iostream>
#include <cmath>

using namespace std;

int res; // global variable

int sum(int a, int b){
  res = a + b;
  return res;
}

int sum2(int a, int b){
  int local_res = a + b; // local variable
  return local_res;
}

int main(){
  
  cout << res << endl;
  
  return 0;
}


