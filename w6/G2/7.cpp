#include <iostream>

using namespace std;

int main(){
  int n, m, maxi, row, column;
  cin >> n >> m;
  int a[n][m];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
      if((i == 0 && j == 0) || a[i][j] > maxi){
        maxi = a[i][j];
        row = i;
        column = j;
      }
    }
  }

  cout << maxi << endl;
  cout << row + 1 << " " << column + 1;
  

  return 0;
}