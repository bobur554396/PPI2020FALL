#include <iostream>

using namespace std;

int main(){
  /*
  Given 2D array.
  Identify is array symmetric or not.
  */
  int n;
  cin >> n;
  int a[n][n];
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      cin >> a[i][j];

  int cnt = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(a[i][j] == a[j][i])
        cnt++;
    }
  }

  if(cnt == n * n)
    cout << "YES";
  else 
    cout << "NO";

  return 0;
}