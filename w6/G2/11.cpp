#include <iostream>

using namespace std;

int main(){
  // - [ ] eye (1, 2, 3)
  // Given number N, fill the matrix in following format:
  /*
  3
  2 2 1
  2 1 3
  1 3 3
  */
  int n;
  cin >> n;
  int a[n][n];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i + j == n - 1)
        a[i][j] = 1;
      if(i + j < n - 1)
        a[i][j] = 2;
      if(i + j > n - 1)
        a[i][j] = 3;
    }
  }


  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }


  return 0;
}