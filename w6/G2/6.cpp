#include <iostream>

using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  int a[n + 1][m + 1];

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
      a[i][j] = i * j;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cout.width(3);
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}