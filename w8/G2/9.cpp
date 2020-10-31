#include <iostream>
#include <cmath>

using namespace std;

float my_max(float a, float b){
  if(a > b)
    return a;
  return b;
}


int main(){

  cout << my_max(2, 4) << endl;
  
  return 0;
}

