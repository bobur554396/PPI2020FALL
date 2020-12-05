#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  // fill(begin, end, val)
  vector<int> v (10);
  
  // fill(v.begin(), v.end(), 4);
  fill(v.begin(), v.begin() + 3, 4);
  fill(v.end() - 4, v.end(), 5);

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << endl;

  return 0;
}