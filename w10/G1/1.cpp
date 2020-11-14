#include <iostream>
#include <vector>

using namespace std;

int main(){
  // STL - Standart Template Library
  // vector - dynamic size array
  vector<int> v;

  v.push_back(2);
  v.push_back(3);
  v.push_back(-1);
  v.push_back(10);

  cout << v.size() << endl;

  for(int i = 0; i < v.size(); i++)
    cout << v.at(i) << " ";
    // cout << v[i] << " ";


  return 0;
}