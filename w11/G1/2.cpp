#include <iostream>
#include <stack>

using namespace std;


// LIFO - last in first out
int main(){
  stack<int> s;
  s.push(3);
  s.push(5);
  s.push(7);
  s.push(2);

  while(!s.empty()){
    cout << s.top() << " ";
    s.pop();
  }






  return 0;
}