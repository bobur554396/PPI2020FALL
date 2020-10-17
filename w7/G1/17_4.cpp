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
  1) 
        l         r
        a b c c b a 
  2) 
          l     r
        a b c c b a 
  
  */
  string s;
  cin >> s;

  int left = 0; 
  int right = s.size() - 1;

  while(left <= right){
    if(s[left] != s[right]){
      cout << "NO";
      return 0;
    }
    left++;
    right--;
  }

  cout << "YES";

  

  return 0;
}