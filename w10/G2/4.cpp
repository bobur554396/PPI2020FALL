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

  /*
    1) 4 3 10 -1
    2) 3 4 10 -1
    3) 3 4 10 -1
    4) 3 4 -1 10   n^2
  */
  
  // cout << *(a + 0) << endl; // a[0]
  // cout << *(v.begin() + 0) << endl; // v[0]
  // cout << *(v.end() - 1) << endl; // v[v.size() - 1]

  cout << v.front() << " " << v.back() << endl;

  sort(v.begin(), v.end(), cmp);

  for(int i = 0; i < v.size(); i++){
    cout << v.at(i) << " ";
  }


  return 0;
}