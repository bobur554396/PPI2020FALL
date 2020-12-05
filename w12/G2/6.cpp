#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

void show(int n){
  cout << n << " ";
}

int genVal(){
  return rand() % 100 + 1;
}

int main(){
  // generate(begin, end, gen_func) [1 - 100]
  // for_each(begin, end, function)
  
  srand(time(0));

  vector<int> v(10);

  generate(v.begin(), v.end(), genVal);
  for_each(v.begin(), v.end(), show);


  
  return 0;
}