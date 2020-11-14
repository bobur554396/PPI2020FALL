#include <iostream>
#include <vector>

using namespace std;

int main(){
  
  /*
    Given infinity numbers untill 0;
    Show all entered number increasing order.
  */

  int a;
  vector<int> v;

  while(true){ // 1 == 1, 1
    cout << "Enter any number or 0 to exit\n";
    cin >> a;
    if(a == 0)
      break;
    v.push_back(a);
  } 

  sort(v.begin(), v.end());

  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); it++)
    cout << *it << " ";


  return 0;
}