#include <iostream>

using namespace std;

int main(){

  string s;

  getline(cin, s);

  for(int i = 0; i < s.size(); i++)
    // cout << (char) toupper(s[i]);
    cout << (char) tolower(s[i]);


  return 0;
}