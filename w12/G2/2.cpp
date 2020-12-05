#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

void show(){
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " "; 

  cout << endl;
}

int main(){
  // rotate (begin, middle, last) 
  /*
    1 2 3 4 5 6 -> 6 1 2 3 4 5 -> 5 6 1 2 3 4 -> 4 5 6 1 2 3
  */
  for(int i = 1; i <= 6; i++)
    v.push_back(i);
  
  show();

  // rotate(v.begin(), v.end() - 1, v.end());
  // rotate(v.begin(), v.end() - 2, v.end());
  // rotate(v.begin(), v.begin() + 2, v.end());
  rotate(v.begin(), v.end() - 1, v.end());

  show();

  
  return 0;
}