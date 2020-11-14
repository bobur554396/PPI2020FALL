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

  set<int>::iterator f = s.find(4);
  if(f != s.end())
    cout << *f;
  else 
    cout << "not found\n";

  return 0;
}