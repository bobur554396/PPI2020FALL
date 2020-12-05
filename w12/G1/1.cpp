#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> v;


bool isEvenOrNegetive(int n){
  return (n % 2 == 0) || n < 0;
}

bool isEven(int n){
  return n % 2 == 0;
}

int my_count_if(){
  vector<int>::iterator it;
  int cnt = 0;
  for(it = v.begin(); it != v.end(); it++){
    if(isEvenOrNegetive(*it))
      cnt++;
  }
  return cnt;
}


int main(){
  // count_if(begin iterator, last iterator, bool function)


  for(int i = 1; i <= 10; i++)
    v.push_back(i);
  
  v.push_back(-4);
  v.push_back(-2);
  v.push_back(-1);

  int count = count_if(v.begin(), v.end(), isEvenOrNegetive);

  cout << count << endl;


  return 0;
}