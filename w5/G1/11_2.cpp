#include <iostream>

using namespace std;

int main()
{
  /*
  You are given number N and N elements. 
  Find number K from given array.

  Input:
  5
  2 -4 -6 -1 8
  -1
  Output:
  Yes
  */
  int n, k;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> k;

  for (int i = 0; i < n; i++)
    if (a[i] == k){
      cout << "YES";
      return 0;
    }

  cout << "NO";
  return 0;
}