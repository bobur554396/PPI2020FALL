#include <iostream>

using namespace std;

int a[100];

int main(){

  // Array
  a[0] = 2;
  a[1] = 3;
  a[4] = 7;

  for(int i = 0; i < 100; i++){
    cout << a[i] << " ";
  }

  return 0;
}