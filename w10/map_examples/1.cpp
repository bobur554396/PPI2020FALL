#include <iostream>
#include <map>

using namespace std;

int main(){
  map<char, int> m;
  /*
    a - 10
    b - 20
    c - 30
  */

  // map_variable[key] = value;
  m['a'] = 10;
  m['b'] = 20;
  m['c'] = 30;

  cout << m['b'] << endl;


  return 0;
}