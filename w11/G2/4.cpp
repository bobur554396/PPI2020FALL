#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// FIFO - First In First Out
int main(){
  // 11 10 2 3 5   [reception]
  queue<int> q;
  q.push(5);
  q.push(3);
  q.push(2);
  q.push(10);
  q.push(11);

  cout << q.size() << endl;
  cout << q.empty() << endl;

  cout << q.front() << " " << q.back() << endl;
  
  q.pop();
  q.pop();

  cout << q.front() << " " << q.back() << endl;


  
  return 0;
}