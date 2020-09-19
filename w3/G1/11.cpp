#include <iostream>

using namespace std;

int main(){
  /* 
  Print out all number which are divisable by 3 in range (a, b)
  [a = 1 b = 10]
  result: 3 6 9
  */
  int a, b;
  cin >> a >> b;

  for(int i = a; i <= b; i++){
    if(i % 3 == 0)
      cout << i << " ";
  }



  return 0;
}