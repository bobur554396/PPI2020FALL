#include <iostream>

using namespace std;

int main()
{
  /*
    You are given number N and N elements.
    Show numbers/values in odd position/index from given array.

    Input:
    5
    2 5 10 0 -1
    Output:
    5 0
  */
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++)
    if(i % 2 == 1)
      cout << a[i] << " ";

  return 0;
}