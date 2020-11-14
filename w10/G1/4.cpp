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

  int a[] = {2, 3, 5};

  // cout << *(a + 1) << endl; // a[1]
  
  sort(v.begin(), v.end());

  cout << v.front() << " " << v.back() << endl; // v[0], v[v.size() - 1]

  for(int i = 0; i < v.size(); i++)
    cout << v.at(i) << " ";

  return 0;
}