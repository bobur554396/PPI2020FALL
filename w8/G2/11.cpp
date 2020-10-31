#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n){
  int res = 1;
  for(int i = 2; i <= n; i++)
    res *= i;
  return res;
}

int main(){

  // 4! = 1 * 2 * 3 * 4 = 24
  int n;
  cin >> n;

  cout << factorial(n) << endl;



  cout << factorial(6) << endl;


  return 0;
}

