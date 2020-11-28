#include <iostream>
#include <stack>

using namespace std;

int main(){
  /*
  - Brackets validation

  ({)} - No
  ({}) - Yes
  }() - No
  ({}{}{}) - Yes
  )}({}) - No

  []
  []
  []
  [(]
  */
  string line;
  stack<char> s; 
  cin >> line;
  for(int i = 0; i < line.size(); i++){
    if(line[i] == '(' || line[i] == '{')
      s.push(line[i]);
    else {
      if(s.empty()){
        cout << "No";
        return 0;
      }
      char cur = line[i]; // or ) or }
      char stack_top = s.top(); // or ( or {
      if(stack_top == '(' && cur != ')'){
        cout << "No";
        return 0;
      }
      if(stack_top == '{' && cur != '}'){
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