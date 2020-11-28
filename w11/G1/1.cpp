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

  // cout << s.size() << endl;
  // cout << s.empty() << endl;

  // cout << s.top() << endl;
  // cout << s.size() << endl;


  s.pop();
  cout << s.top() << endl;
  cout << s.size() << endl;






  return 0;
}