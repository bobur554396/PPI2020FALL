#include <iostream>

using namespace std;

int main(){

  string s = "hello";

  cout << s[0] << " " << s[s.size() - 1] << endl;
  cout << s.front() << " " << s.back() << endl;

  return 0;
}