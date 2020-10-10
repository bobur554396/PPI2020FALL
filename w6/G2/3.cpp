#include <iostream>

using namespace std;


int a[3][4];

int main(){

  a[0][2] = 5;
  a[2][1] = -1;
  a[1][1] = 10;
  a[2][3] = a[1][1] - a[0][2] - 3;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }  

  return 0;
}