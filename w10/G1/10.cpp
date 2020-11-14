#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
  set<int> s;

  s.insert(4);
  s.insert(2);
  s.insert(0);
  s.insert(1);
  s.insert(4);

  // s.erase(4); // - by value
  s.erase(s.begin()); // - by address

  set<int>::iterator it;
  for(it = s.begin(); it != s.end(); it++)
    cout << *it << " ";


  return 0;
}