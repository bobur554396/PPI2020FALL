#include <iostream>
#include <vector>

using namespace std;


int main(){
  /*
  Given number N and N elements.
  */
  int n, a;
  cin >> n;
  vector<int> v;

  for(int i = 0; i < n; i++){
    cin >> a;
    v.push_back(a);
  }

  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }

  

  return 0;
}