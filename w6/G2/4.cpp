#include <iostream>

using namespace std;



int main(){
  
  int a[3][4] = {{1, 2, 3, 0}, {4, 5, 6, -1}, {7, 8, 9, 4}};
  int b[3] = {1, 2, 3};
  
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 4; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }  

  return 0;
}