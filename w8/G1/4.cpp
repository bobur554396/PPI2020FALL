#include <iostream>

using namespace std;

int main(){
  string s;

  getline(cin, s);
  // hello34 my2 n3ame is K88btu
  // 342388

  for(int i = 0; i < s.size(); i++){
    // if(isalpha(s[i]))
    // if(isalnum(s[i]))
    if(isdigit(s[i]))
      cout << s[i];
  }


  return 0;
}