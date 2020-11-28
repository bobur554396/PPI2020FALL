#include <iostream>
#include <stack>

using namespace std;


int main(){
  /*
  - Brackets validation

  ({}) - Yes
  (}) - No
  {{(())}} - Yes
  }{(())} - No
  */
  string s;
  cin >> s;
  int cnt = 0;
  int cnt2 = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '(')
      cnt++;
    if(s[i] == '{')
      cnt2++;
    else {
      if(s[i] == ')'){
        cnt--;
        if(cnt < 0){
          cout << "No";
          return 0;
        }
      }
      if(s[i] == '}'){
        cnt2--;
        if(cnt2 < 0){
          cout << "No";
          return 0;
        }
      }
    }
  }

  if(cnt == 0 && cnt2 == 0)
    cout << "Yes";
  else 
    cout << "No";


  return 0;
}