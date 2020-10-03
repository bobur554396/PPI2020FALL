#include <iostream>

using namespace std;

int main(){
  /*

  Input:
  3
  1 2 3
  4 5 6

  Output:
  1 4 2 5 3 6
  */
  int n;
  cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  for (int i = 0; i < n; i++)
    cout << a[i] << " " << b[i] << " ";

  return 0;
}