#include <iostream>

using namespace std;

int main()
{
  /*
  You are given number N and N elements. 
  Find number K from given array.
  Find number K and remove it, shift left all rest
  elements add 0 at the end
  
  Input:
  5
  2 -4 -6 -6 8
  -6
  Output:
  2 -4 8 0 0
  */
  int n, k;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> k;


  return 0;
}