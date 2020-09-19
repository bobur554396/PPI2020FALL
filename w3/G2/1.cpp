#include <iostream>

using namespace std;

int main(){
  // - [ ] loop operators: for, while, do while

  /* 
    for(initialize iterator; condition; inc/dec iterator) {
      expression / instructions;        
    }
  */

  cout << "loop started\n";
  for(int i = 0; i < 10; i = i + 1){
    cout << i << " ";
  }
  cout << "\nloop ended";

  return 0;
}