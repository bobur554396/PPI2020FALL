#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n + 1][n + 1]; // a[6][6]; 4

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      a[i][j] = i * j;


  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      cout.width(3);
      cout << a[i][j] << " ";
    }
    cout << "\n"; 
  }

  return 0;
}