#include <iostream>
#include <vector>

using namespace std;

int main(){
  // STL - Standart Template Library
  int a = 2;
  int a1[4];
  int a2[4][4];

  // [-1][10][3][4]
  vector<int> v;
  v.push_back(4);
  v.push_back(3);
  v.push_back(10);
  v.push_back(-1);

  v.clear();

  cout << v.empty() << endl;
  
  // for(int i = 0; i < v.size(); i++){
  //   cout << v.at(i) << " ";
  //   // cout << v[i] << " ";
  // }


  return 0;
}