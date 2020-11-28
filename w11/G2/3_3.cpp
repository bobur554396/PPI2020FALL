#include <iostream>
#include <stack>

using namespace std;

int main(){
  /*
  - Brackets validation

  () - Yes
  (()) - Yes
  (() - No
  ()) - No
  )()( - No
  )()()()() - No

  []
  []
  []
  []
  */
  string line;
  stack<char> s; 
  cin >> line;
  for(int i = 0; i < line.size(); i++){
    if(line[i] == '(')
      s.push(line[i]);
    else {
      if(s.empty()){
        cout << "No";
        return 0;
      }
      s.pop();
    }
  }
  if(s.empty())
    cout << "Yes";
  else 
    cout << "No";
  

  
  
  return 0;
}