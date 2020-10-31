#include <iostream>
#include <cmath>

using namespace std;

char myToUpper(char c){
  // int code = (int) c;
  // if(code >= 97 && code <= 122)
  if(c >= 'a' && c <= 'z')
    c -= 32;
  return c;
}

// a - 97, z - 122
// A - 65, Z - 90


int main(){

  string s;
   
  getline(cin, s);

  for(int i = 0; i < s.size(); i++)
    cout << myToUpper(s[i]);
  
  return 0;
}

