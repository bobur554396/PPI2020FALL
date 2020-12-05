#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;


int main(){
  // next_permutation(begin, end), prev_permutation(begin, end)
  /*
  1 2 3
  1 3 2
  2 1 3
  2 3 1
  3 1 2
  3 2 1
  
  N! - max number of permutation
  3! = 1 * 2 * 3 = 6
  4! = 1 * 2 * 3 * 4 = 24
  */
  int a[] = {1, 2, 3, 4};
  do {
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
  } while(next_permutation(a, a + 4));

  // do {
  //   cout << a[0] << " " << a[1] << " " << a[2] << endl;
  // } while(prev_permutation(a, a + 3));

  return 0;
}