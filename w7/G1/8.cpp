#include <iostream>

using namespace std;

int main(){

  string s;
  cin >> s;
  // 1 + 5 = 6
  // 2 + 5 = 7
  // 3 + 5 = 8
  // Output: 678

  for(int i = 0; i < s.size(); i++){
    int a = int(s[i]) - int('0');
    cout << a + 5;
  }


  
  

  return 0;
}