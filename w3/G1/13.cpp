#include <iostream>

using namespace std;

int main()
{
  /* 
  Find sum of all numbers from "A" till "B"; A < B
  [a = 1 b = 5]  1 + 2 + 3 + 4 + 5;  
  result: 15
  */
  int a, b;
  cin >> a >> b;

  /*
    i = 1: sum = 0 + 1 = 1
    i = 2: sum = 1 + 2 = 3
    i = 3: sum = 3 + 3 = 6
    i = 4: sum = 6 + 4 = 10
    i = 5: sum = 10 + 5 = 15
  */

  int sum = 0;
  for(int i = a; i <= b; i++){
    sum += i; // sum = sum + i;
  }

  cout << sum << endl;

  

  return 0;
}