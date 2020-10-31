#include <iostream>

using namespace std;

void hello(){
  for(int i = 0; i < 5; i++)
    cout << "hi\n";
}

int main(){
  cout << "Main function starting point\n";
  
  hello();

  cout << "Main function ending point\n";
  return 0;
}