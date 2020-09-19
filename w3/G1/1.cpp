#include <iostream>

using namespace std;

int main(){

  // loop: for, while, do while

  // loop 1: i = 1, 1 < 10 == true
  // loop 2: i = 2, 2 < 10 == true
  // ...
  // loop 9: i = 9, 9 < 10 == true
  // loop 10: i = 10, 10 < 10 == false

  for(int i = 1; i < 10; i = i + 1){
    cout << "hi ";
  }



  return 0;
}