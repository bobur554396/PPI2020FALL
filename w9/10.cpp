#include <iostream>
#include <cmath>

using namespace std;


int f1(int a[], int n){
  int maxi = a[0];
  for(int i = 1; i < n; i++){
    if(a[i] > maxi)
      maxi = a[i];
  }
  return maxi;
}

int f2(int a[], int n){
  if(n == 1)
    return a[0];
  return max(a[n - 1], f2(a, n - 1));
}

/*
  1) f2([2, 10, -1, 5], 4) => max(5, f2([2, 10, -1], 3)) => max(5, max(-1, max(10, 2))) => 10
  2) f2([2, 10, -1], 3) => max(-1, f2([2, 10], 2)) => max(-1, max(10, 2))
  3) f2([2, 10], 2) => max(10, f2([2], 1)) => max(10, 2)
  4) f2([2], 1) => 2

  2 -> 10 = 1 * 2^1 + 0 * 2^0
  4 -> 100 = 1 * 2^2 + 0 * 2^1 + 0 * 2^0
*/

int main(){
  int a[] = {2, 10, -1, 5};
  int n = 4;

  cout << f1(a, n) << endl << f2(a, n) << endl;

  return 0;
}