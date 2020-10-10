#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n][n];

  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      cin >> a[i][j];

  bool flag = true;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(a[i][j] != a[j][i]){
        flag = false;
        break;
      }
    }
    if(flag == false)
      break;
  }

  if(flag)
    cout << "YES";
  else 
    cout << "NO";

  return 0;
}