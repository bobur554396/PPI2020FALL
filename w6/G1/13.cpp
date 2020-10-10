#include <iostream>

using namespace std;

int main(){
  /*

  3 4
  1 3 2 4 // max = 10
  2 9 0 8 // max = 19
  3 5 7 5 // max = 20
  */
  int n, m;
  cin >> n >> m;
  int a[n][m];
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      cin >> a[i][j];

  int maxi;
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