#include <iostream>

using namespace std;

int main(){
  /*
  We have N students and their points for each M problem.
  Find the winner of compitition.

  Input:
  3 4
  2 3 5 0  // 10
  8 3 2 1  // 14
  8 9 5 3  // 25
  Output:
  Student 3 is winnder.
  */
  int n, m, maxi;
  cin >> n >> m;
  int a[n][m];

  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      cin >> a[i][j];



  return 0;
}