#include <iostream>
#include <sstream>

using namespace std;

int main(){

  stringstream ss;

  ss << "hello" << " 2.4" << " 4";

  string s;
  float f;
  int n;

  ss >> s >> f >> n;


  cout << s << endl;

  cout << f * 2 << endl;
  cout << n * 2 << endl;

  return 0;
}