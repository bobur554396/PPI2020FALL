#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
  // 10 3 5 4   [reception]
  deque<int> q;
  q.push_back(5);
  q.push_back(3);
  q.push_front(4);
  q.push_back(10);

  cout << q.size() << endl;
  cout << q.empty() << endl;

  cout << q.front() << " " << q.back() << endl;

  q.pop_back(); 
  q.pop_front(); 

  cout << q.front() << " " << q.back() << endl;


  
  return 0;
}