#include <iostream>

using namespace std;

int main(){

  char c[5] = {'h', 'e', 'l', 'l', 'o'};

  string s = "hello";

  string t = s;

  t += " ";
  t += "kbtu";

  cout << t << endl << s << endl;

  cout << (t == s) << endl;

  return 0;
}