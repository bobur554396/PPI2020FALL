#include <iostream>
#include <sstream>

using namespace std;

int main(){

  /*
  Count number of words from given sentence.
  
  Input:
  hello my name is kbtu
     hello      my     name is kbtu
  Output:
  5
  */

  string s;

  getline(cin, s);

  stringstream ss(s);

  int cnt = 0;
  while(ss >> s)
    cnt++;

  cout << cnt << endl;;



  return 0;
}