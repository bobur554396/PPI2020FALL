#include <iostream>

using namespace std;

int main(){

  string s = "hello";

  s.append(" ");

  s += "kbtu";

  s.insert(2, "q");

  cout << s << endl;

  

  return 0;
}