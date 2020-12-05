#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void show(int n){
  cout << n * 2 << " ";
}

int main(){
  // for_each(begin, end, function)
  int a[] = {1, 1, 1, 2, 3, 3, 4};
  vector<int> v(a, a + 7);

  for_each(v.begin(), v.end(), show);


  
  return 0;
}