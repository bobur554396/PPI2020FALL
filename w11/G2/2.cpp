#include <iostream>
#include <stack>

using namespace std;

int main(){
  /*
  vector - [2][4][10][1]
  stack - 
          [2]
          [4]
          [10]
          [1]
  
  stack - LIFO - Last In First Out
  */
  stack<int> s;
  s.push(1);
  s.push(10);
  s.push(4);
  s.push(2);

  while(!s.empty()){
    cout << s.top() << " ";
    s.pop();
  }
  return 0;
}