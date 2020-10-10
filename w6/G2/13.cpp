#include <iostream>

using namespace std;

int main(){
  /*
  We have N students and their points for each M problem.
  Show maximum points for each player.

  Input:
  3 4
  2 3 5 0
  8 3 2 1
  8 9 5 3
  Output:
  5
  8
  9
  */
  int n, m, maxi;
  cin >> n >> m;
  int a[n][m];

  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      cin >> a[i][j];

  for(int i = 0; i < n; i++){
    maxi = a[i][0];
    for(int j = 0; j < m; j++){
      if(a[i][j] > maxi)
        maxi = a[i][j];
    }
    cout << maxi << endl;
  }


  return 0;
}