#include <iostream>

using namespace std;

void show(){
  cout << "hi" << endl;
}

void show2(){
  cout << "function 2" << endl;

  show();

  cout << "function 2 end";
}

int main(){
  
  show2();

  return 0;
}