#include <iostream>

using namespace std;

int main(){

  // Is given string palindrom or not?

  /*
  YES:
    aabbaa
    aba
    abbba
  NO:
    aabaab
    abb
  */
  string s;
  cin >> s;

  string t = s;

  reverse(s.begin(), s.end());

  if(s == t)  
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  

  return 0;
}