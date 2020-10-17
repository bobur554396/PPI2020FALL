#include <iostream>

using namespace std;

int main(){

  string s = "hello kbtu";

  // return -1 
  // return string::npos 
  
  size_t f = s.find("kbtu");
  if(f != -1)
    cout << f << endl;
  else
    cout << "not found\n";



  return 0;
}