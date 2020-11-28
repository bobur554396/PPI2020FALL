#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
  deque<int> q;
  q.push_back(5);
  q.push_back(7);
  q.push_front(2);
  q.push_front(1);

  cout << q.front() << " " << q.back() << endl;

  q.pop_back();
  q.pop_back();
  q.pop_front();

  cout << q.front() << " " << q.back() << endl;



  return 0;
}