#include <iostream>

using namespace std;

int main(){

  string s = "hello kbtu";

  // string t = s.substr(3);
  // string t = s.substr(3, s.size() - 1);
  string t = s.substr(3, 10);

  cout << t << endl;

  return 0;
}