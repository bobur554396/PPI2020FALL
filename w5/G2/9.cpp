#include <iostream>

using namespace std;

int main()
{
  /*
    You are given number N and N elements.
    Show indexes where stored even values.

    Input:
    5
    2 5 10 0 -1
    Output:
    0 2 3
  */
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++)
    if(a[i] % 2 == 0)
      cout << i << " ";

  return 0;
}