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
  q.push(11);
  

  while(!q.empty()){
    cout << q.front() << " ";
    q.pop();
  }

  


  return 0;
}