#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int genFunc(){
  return rand() % 10 + 1;
}

void show(int n){
  cout << n << " ";
}

int main(){
  // generate(begin, end, gen_func)

  srand(time(0));

  vector<int> v (10);

  generate(v.begin(), v.end(), genFunc);
  for_each(v.begin(), v.end(), show);

  return 0;
}