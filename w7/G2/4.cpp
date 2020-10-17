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

  for(int i = 0; i < t.size(); i++)
    cout << t[i] << " ";

  return 0;
}