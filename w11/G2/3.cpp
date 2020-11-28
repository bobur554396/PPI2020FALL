#include <iostream>
#include <stack>

using namespace std;

int main(){
  /*
  - Brackets validation

  () - Yes
  (()) - Yes
  ()()() - Yes
  (() - No
  ()) - No
  )()( - No
  )()()()() - No
  */
  string s;
  cin >> s;
  int cnt = 0;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '(')
      cnt++;
    else {
      cnt--;
      if(cnt < 0){
        cout << "No";
        return 0;
      }
    }
  }
  if(cnt == 0)
    cout << "Yes";
  else 
    cout << "No";
  
  return 0;
}