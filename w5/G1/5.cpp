#include <iostream>

using namespace std;

int main(){
  /*
  You are given number N and N elements.

  Input:
  5
  2 4 0 1 8
  */
  int n;
  cin >> n;
  int a[n]; // [0, ..., n - 1]
  
  for(int i = 0; i < n; i++)
    cin >> a[i];
  
  // your code here

  for(int i = 0; i < n; i++)
    cout << a[i] << " ";


  return 0;
}