#include <iostream>

using namespace std;

int main(){
  
  int a[3][4];

  a[0][0] = 3; 
  a[2][3] = -10;
  a[1][3] = 2;
  a[0][1] = a[0][0] + 5; 

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }


  return 0;
}