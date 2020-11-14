#include <iostream>
#include <vector>

using namespace std;

bool cmp(int a, int b){
  return a > b;
  // if(a > b)
  //   return true;
  // return false;
}

int main(){
  vector<int> v;

  v.push_back(2);
  v.push_back(3);
  v.push_back(-1);
  v.push_back(10);

  sort(v.begin(), v.end(), cmp);
  // reverse(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++)
    cout << v.at(i) << " ";

  return 0;
}