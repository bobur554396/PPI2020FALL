#include <iostream>

using namespace std;

int main()
{
  /*
    You are given number N and N elements.
    Find the number K from given array.
    Print YES / NO.

    Input:
    5
    2 -5 10 0 -1
    10
    Output:
    YES
  */
  int n, k;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> k;

  for (int i = 0; i < n; i++){
    if (a[i] == k){
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";

  return 0;
}