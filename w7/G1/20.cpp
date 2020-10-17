#include <iostream>
#include <sstream>

using namespace std;

int main(){

  /*
  Count number of words from given sentence.
  
  Input:
  hello my name is kbtu
     hello      my     name is kbtu
  Output:
  5
  */

  string s;

  getline(cin, s);

  int cnt = 0, flag = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == ' '){
      flag = 0;
    } else if(flag == 0){
      cnt++;
      flag = 1;
    }
  }
  cout << cnt << endl;





  return 0;
}