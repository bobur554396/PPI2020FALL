#include <iostream>

using namespace std;

int main(){

  string s = "hello kbtu";

  // return (founded staring index, string::npos or -1 )
  
  size_t f = s.find("kbtu2");
  if(f != string::npos)
    cout << "found\n";
  else
    cout << "not found\n";



  return 0;
}