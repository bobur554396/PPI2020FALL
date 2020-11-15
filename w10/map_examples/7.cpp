#include <iostream>
#include <vector>
#include <map>

using namespace std;

void show(map<string, int> m){
  map<string, int>::iterator it = m.begin();
  while(it != m.end()){
    cout << it->first << " ===> " << it->second << endl;
    it++;
  }
}

int main(){
  
  map<string, int> m;
  int n;
  cin >> n;

  string s;
  int a;
  for(int i = 0; i < n; i++){
    cin >> s >> a;
    m[s] = a;
  }

  // your code to solve problem using map

  show(m);

  return 0;
}