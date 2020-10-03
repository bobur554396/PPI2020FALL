#include <iostream>

using namespace std;

int main()
{
  /*
    You are given number N and N elements.
    Show the even numbers from given array.

    Input:
    5
    2 5 10 0 -1
    Output:
    2 10 0
  */
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++)
    if(a[i] % 2 == 0)
      cout << a[i] << " ";

  return 0;
}