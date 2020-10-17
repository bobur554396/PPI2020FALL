#include <iostream>

using namespace std;

int main(){

  string s = "hello kbtu";
  string t = "kbtu";

  int f = s.find(t); // f = [starting index of target string, -1 = string::npos]

  if(f != string::npos)
    cout << f << endl;
  else
    cout << "not found\n";



  return 0;
}