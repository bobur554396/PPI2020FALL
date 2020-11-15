#include <iostream>
#include <map>

using namespace std;

int main(){
  map<char, int> m;

  m['a'] = 10;
  m['b'] = 20;
  m['c'] = 30;

  pair<char, int> p1 ('d', 40);
  pair<char, int> p2 ('f', 50);

  m.insert(p1);
  m.insert(p2);

  map<char, int>::iterator it;
  for(it = m.begin(); it != m.end(); it++)
    cout << (*it).first << "=>" << (*it).second << endl;

  return 0;
}