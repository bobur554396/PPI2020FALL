#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isEven(int n){
  return n % 2 == 0;
}

int main(){
  // count_if (begin, end, function)
  // 1 2 3 4 5 6 7 8
  // 0 1 0 1 0 1 0 1

  vector<int> v;
  for(int i = 1; i <= 8; i++)
    v.push_back(i);

  int res = count_if(v.begin(), v.end(), isEven);

  cout << res << endl;

  
  return 0;
}