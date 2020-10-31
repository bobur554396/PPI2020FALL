#include <iostream>
#include <cmath>

using namespace std;

int my_max(int a, int b){
  if(a > b)
    return a;
  return b;
}

int main(){
  
  cout << my_max(4, 1) << endl;
  
  return 0;
}


