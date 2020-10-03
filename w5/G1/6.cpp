#include <iostream>

using namespace std;

int main()
{
  /*
  You are given number N and N elements. 
  Find sum of all elements of given sequence.

  Input:
  5
  2 4 0 1 8
  Output:
  15
  */
  int n, sum = 0;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++){ // i = i + 1
    cin >> a[i];
    sum += a[i]; // sum = sum + a[i];
  }

  cout << sum << endl;

  return 0;
}