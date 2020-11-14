#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
  set<int> s;

  s.insert(4);
  s.insert(10);
  s.insert(-1);
  s.insert(10);
  s.insert(2);

  // cout << s.size() << endl;

  set<int>::iterator it;
  for(it = s.begin(); it != s.end(); it++)
    cout << *it << " ";

  return 0;
}