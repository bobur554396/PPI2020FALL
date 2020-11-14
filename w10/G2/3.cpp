#include <iostream>
#include <vector>

using namespace std;

int main(){
  // STL - Standart Template Library

  int a[] = {1, 2, 4};
  vector<int> v;
  v.push_back(4);
  v.push_back(3);
  v.push_back(10);
  v.push_back(-1);

  
  // cout << *(a + 0) << endl; // a[0]
  // cout << *(v.begin() + 0) << endl; // v[0]
  // cout << *(v.end() - 1) << endl; // v[v.size() - 1]

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++){
    cout << v.at(i) << " ";
  }


  return 0;
}