#include <iostream>

using namespace std;

int main()
{
  /* 
  - [ ] factorial of number "N"
  n = 4 ------> 1 * 2 * 3 * 4 = 4!
  result: 24
  */

  /*
    i = 1: res = 1 * 1 = 1
    i = 2: res = 1 * 2 = 2
    i = 3: res = 2 * 3 = 6
    i = 4: res = 6 * 4 = 24
  */
  int n;
  cin >> n;
  
  int res = 1;
  for(int i = 1; i <= n; i++){
    res = res * i;
  }
  cout << res << "\n";

  return 0;
}