#include <iostream>

using namespace std;

int main(){

  string s = "hello";

  // cout << *s.begin() << endl;
  // cout << *(s.end() - 1) << endl;

  sort(s.begin(), s.end());
  reverse(s.begin(), s.end());

  cout << s << endl;

  return 0;
}