#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void show(int n){
  cout << n << " ";
}

int main(){
  // for_each(begin, end, function)
  vector<int> v;
  for(int i = 1; i <= 10; i++)
    v.push_back(i);
  
  for_each(v.begin(), v.end(), show);

  return 0;
}