#include <iostream>

using namespace std;

int main()
{
  /*
    You are given number N and N elements.
    Find maximum number from given array.

    Input:
    5
    2 -5 10 0 -1
    Output:
    10
  */
  int n, maxi;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++){
    cin >> a[i];
    if (i == 0 || a[i] < maxi)
      maxi = a[i];
  }

  cout << maxi << endl;

  return 0;
}