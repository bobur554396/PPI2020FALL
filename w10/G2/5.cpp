#include <iostream>
#include <vector>

using namespace std;

bool cmp(int a, int b){
  return a > b;
  // if (a > b)
  //   return true;
  // return false;
}

int main(){
  // STL - Standart Template Library

  int a[] = {1, 2, 4};
  vector<int> v;
  v.push_back(4);
  v.push_back(3);
  v.push_back(10);
  v.push_back(-1);

  sort(v.begin(), v.end(), cmp);

  
  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }

  // for(int i = 0; i < v.size(); i++){
  //   cout << v.at(i) << " ";
  // }


  return 0;
}