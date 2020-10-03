#include <iostream>

using namespace std;

int main()
{
  /*
  You are given number N and N elements. 
  Find maximum number from given array.

  Input:
  5
  -2 -4 -6 -1 -5
  Output:
  6
  */
  int n, maxi;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++){
    cin >> a[i];
  }

  maxi = a[0];

  for (int i = 0; i < n; i++){
    if(a[i] > maxi)
      maxi = a[i];
  }

  cout << maxi << endl;

  return 0;
}