#include <iostream>
#include <vector>

using namespace std;


bool cmp(int a, int b){
  return a > b;
}

int main(){
  /*
  Input:
  2
  4
  51
  5
  6
  0
  Output:
  51 6 5 4 2
  */
  int n;
  vector<int> v;

  while(true){
    cout << "Enter any number or 0 to exit\n";
    cin >> n;
    if(n == 0)
      break;
    v.push_back(n);
  }

  sort(v.begin(), v.end(), cmp);
  
  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }

  return 0;
}