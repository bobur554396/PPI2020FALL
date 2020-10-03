#include <iostream>

using namespace std;

int main(){

  // Array
  int a[5];
  a[0] = 2;
  a[1] = 3;
  a[4] = 7;

  // cout << *(a + 0) << endl;
  // cout << *(a + 1) << endl; 
  // cout << *(a + 2) << endl;
  // cout << *(a + 3) << endl;
  // cout << *(a + 4) << endl;

  cout << a[0] << endl;
  cout << a[1] << endl;
  cout << a[2] << endl;
  cout << a[3] << endl;
  cout << a[4] << endl;

  return 0;
}