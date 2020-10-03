#include <iostream>

using namespace std;

int main(){

  // Array
  int a[5]; // static/fixed size
  a[0] = 2;
  a[1] = 5;
  a[2] = a[1] * 10 - a[0];
  a[4] = -1;

  for(int i = 0; i < 5; i++)
    cout << a[i] << " ";

  return 0;
}