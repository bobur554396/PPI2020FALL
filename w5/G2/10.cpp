#include <iostream>

using namespace std;

int main()
{
  /*
    You are given number N and N elements.
    Show the number of negative elements of array. 

    Input:
    5
    2 -5 -10 0 -1
    Output:
    3
  */
  int n, cnt = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
    if(a[i] < 0)
      cnt++;
  }

  cout << cnt << endl;

  return 0;
}