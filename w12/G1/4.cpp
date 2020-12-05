#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  // unique (begin, end)
  int a[] = {1, 1, 2, 2, 3, 4, 5};
  vector<int> v (a, a + 7);
  
  vector<int>::iterator found = unique(v.begin(), v.end());
  vector<int>::iterator it;
  for(it = v.begin(); it != found; it++)  
    cout << *it << " ";

  cout << endl;

  return 0;
}