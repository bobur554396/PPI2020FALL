#include <iostream>

using namespace std;

int main()
{
  /*
  You are given number N and N elements. 
  Show odd numbers from given array.

  Input:
  5
  2 4 0 1 5
  Output:
  1 5
  */
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++){
    cin >> a[i];
    if(a[i] % 2 == 1)
      cout << a[i] << " "; 
  }

  return 0;
}