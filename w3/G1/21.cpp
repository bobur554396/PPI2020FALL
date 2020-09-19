#include <iostream>

using namespace std;

int main()
{
  /*
    Find sum of all numbers util user enter 0
    2
    12
    5
    0

    result: 19
  */

  int sum = 0, n;


  do {
    cin >> n;
    sum += n;
  } while (n != 0);

  cout << sum << endl;


  return 0;
}