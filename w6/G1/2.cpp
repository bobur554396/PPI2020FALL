#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;

  // 1) 1 * 1, 1 * 2, 1 * 3, 1 * 4....
  // 2) 2 * 1, 2 * 2, 2 * 3, 2 * 4....
  // 3) ...

  for(int i = 1; i < n; i++){
    for(int j = 1; j < n; j++){
      cout.width(3);
      cout << i * j << " "; 
    }
    cout << "\n";
  }


  return 0;
}