#include <iostream>

using namespace std;

void show(){
  cout << "Line 1\n";
  cout << "Line 2\n";
  cout << "Line 3\n";
  return;
  cout << "Line 4\n";
  cout << "Line 4\n";
  cout << "Line 4\n";
  cout << "Line 4\n";
  cout << "Line 4\n";
}

int main(){
  
  show();

  cout << "Line 4 from main functiin\n";
  return 0;
}