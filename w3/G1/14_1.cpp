#include <iostream>

using namespace std;

int main()
{
  /* 
  - [ ] fibonacci sequence (0, 1, 1, 2, 3, 5, 8, 13, ..)
  Enter some number "N", print out first "N" numbers from 
  fibonacci sequence

  n = 6
  0 1 1 2 3 5
  */

  /*
  (3)
  0   1    1    2    3    5
  t1  t2  next --------------> t1 = t2; t2 = next;

  (4)
  0   1    1    2    3    5
      t1  t2  next

  (5)
  0   1    1    2    3    5
           t1   t2  next


  t1 = 0
  t2 = 1 
  next = t1 + t2 = 0 + 1 = 1;
  */
  int n;
  cin >> n;

  int t1 = 0, t2 = 1, next;

  for (int i = 0; i < n; i++){
    if (i <= 1)
      cout << i << " ";
    else {
      next = t1 + t2;
      t1 = t2;
      t2 = next;
      cout << next << " ";
    }
  }

  return 0;
}