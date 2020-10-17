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
  Solution:

  s = abccba
  1) if(s[0] == s[5])
  1) if(s[1] == s[4])
  1) if(s[2] == s[3])

  */
  string s;
  cin >> s;

  for(int i = 0; i < s.size() / 2; i++){
    if(s[i] != s[s.size() - 1 - i]){
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";

  

  return 0;
}