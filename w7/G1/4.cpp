#include <iostream>

using namespace std;

int main(){

  string s("hello");

  string t = s;

  t += ' ';
  t += "kbtu";

  cout << t << " " << s << endl;

  cout << (t == s) << endl;

  return 0;
}