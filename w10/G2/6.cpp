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
  vector<int> v;
  v.push_back(4);
  v.push_back(3);
  v.push_back(10);
  v.push_back(-1);

  sort(v.begin(), v.end(), cmp);
  
  // 10 4 3 -1
  
  // v.erase(v.begin());
  // v.erase(v.begin());
  // v.erase(v.begin(), v.begin() + 2);
  // v.erase(v.begin(), v.end()); // <=> v.clear();
  v.erase(v.end() - 2, v.end());

  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }


  return 0;
}