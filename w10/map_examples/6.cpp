#include <iostream>
#include <vector>
#include <map>

using namespace std;

void show(map<char, int> m){
  map<char, int>::iterator it = m.begin();
  while(it != m.end()){
    if(it->second > 0)
      cout << it->first << " ===> " << it->second << endl;
    it++;
  }
}

int main(){
  // - [ ] How many times occurs each letter in given string

  /*
  Input:
    aaaccavvb
  Output:
    a - 4
    c - 2
    v - 2
    b - 1
  */
  string s;
  cin >> s;

  map<char, int> m;
  for(char c = 'a'; c <= 'z'; c++)
    m[c] = 0;
  
  for(int i = 0; i < s.size(); i++){
    m[s[i]]++;
  }

  // for(char c = 'a'; c <= 'z'; c++){
  //   if(m[c] > 0)
  //     cout << c << " ==> " << m[c] << endl;
  // }

  show(m);

  return 0;
}