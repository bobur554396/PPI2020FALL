#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// FIFO - first in first out
int main(){
  queue<int> q;
  q.push(5);
  q.push(6);
  q.push(2);
  q.push(10);

  cout << q.size() << endl;
  // cout << q.empty() << endl;
  cout << q.front() << " " << q.back() << endl;
  
  q.pop();
  
  cout << q.front() << " " << q.back() << endl;


  


  return 0;
}