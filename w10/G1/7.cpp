#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;

  v.push_back(2);
  v.push_back(3);
  v.push_back(-1);
  v.push_back(10);

  // v.erase(v.begin());
  // v.erase(v.begin(), v.end());
  // v.erase(v.begin(), v.begin() + 2);
  v.erase(v.end() - 2, v.end());

  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); it++)
    cout << *it << " ";

  return 0;
}