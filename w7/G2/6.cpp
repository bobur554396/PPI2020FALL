#include <iostream>

using namespace std;

int main(){

  string s = "123";
  // output: 149

  for(int i = 0; i < s.size(); i++){
    int n = int(s[i]) - int('0');
    cout << n * n;
  }

  return 0;
}