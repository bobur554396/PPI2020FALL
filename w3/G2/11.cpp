#include <iostream>

using namespace std;

int main()
{
  /* 
    1)Show all number which are divisiable by 3 in range [a, b], a < b;
    2) Show the number of divisors
  */

  /*

    a = 1; b = 14;
    result: 3 6 9 12
            4
  */
  int a, b;

  cin >> a >> b;
  
  int cnt = 0; // count
  for (int i = a; i <= b; i++){
    if (i % 3 == 0){
      cnt++;
      cout << i << " ";
    }
  }

  cout << endl << cnt << endl;

  return 0;
}