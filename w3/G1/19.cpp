#include <iostream>

using namespace std;

int main(){
  /*
  Find sum of digits of given number

  n = 14
  result = 5 --- > 1 + 4

  n = 236
  result = 11 --- > 2 + 3 + 6
  */

  /*
  n = 236: sum = sum + a = 0 + 6 = 6
  n = 23: sum = sum + a = 6 + 3 = 9
  n = 2: sum = sum + a = 9 + 2 = 11
  n = 0: stop our loop
  */
  int n;
  cin >> n;

  int sum = 0;
  while(n > 0){
    int a = n % 10;
    sum += n % 10; // sum = sum + a;
    n /= 10; // n = n / 10;
  }

  cout << sum << endl;




  return 0;
}