#include <iostream>

using namespace std;

int main(){
  /*
    You are given number N and N elements.

    Input:
    5
    2 5 10 0 -1
  */
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++)
    cin >> a[i];

  // your code

  for (int i = 0; i < n; i++)
    cout << a[i] << " ";

  return 0;
}