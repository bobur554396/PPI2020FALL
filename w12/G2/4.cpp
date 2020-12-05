#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  // unique (begin, end)  
  // 1, 1, 1, 2, 3, 3, 4 => 1, 2, 3, 4, 3, 3, 4
  int a[] = {1, 1, 1, 2, 3, 3, 4};
  vector<int> v(a, a + 7);

  vector<int>::iterator f = unique(v.begin(), v.end());
  vector<int>::iterator it;

  for(it = v.begin(); it != f; it++)
    cout << *it << " ";

  
  return 0;
}