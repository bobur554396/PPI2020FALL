#include <iostream>

using namespace std;

int main(){
  // infinity loop
  int n = 1;

  for ( ; ; ){
    cout << n << " ";
    n++;
  }

  return 0;
}