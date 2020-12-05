#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v(10);

void show(){
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " "; 

  cout << endl;
}

int main(){
  // fill (begin, end, val)  

  // fill(v.begin(), v.end(), 4);
  fill(v.begin(), v.begin() + 3, 4);
  fill(v.end() - 5, v.end() - 2, 3);

  show();

  
  return 0;
}