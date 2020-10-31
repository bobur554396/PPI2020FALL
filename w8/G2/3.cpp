#include <iostream>

using namespace std;

int main(){

  //    - [ ] isalpha, isdigit, isalnum, ispunct
  // hell45o My na*%me is KBTU

  string s;

  getline(cin, s);

  for(int i = 0; i < s.size(); i++)
    // if(isalpha(s[i]))
    // if(isdigit(s[i]))
    if(isalnum(s[i]))
      cout << s[i];



  return 0;
}