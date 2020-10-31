#include <iostream>

using namespace std;

char myToLower(char c){
  int code = (int) c;
  if(65 <= c && c <= 90)
    code += 32;
  return code;
}

char myToLower2(char c){
  if('A' <= c && c <= 'Z')
    c += 32;
  return c;
}

int main(){
  string s;

  getline(cin, s);

  for(int i = 0; i < s.size(); i++){
    cout << myToLower2(s[i]);
  }


  return 0;
}