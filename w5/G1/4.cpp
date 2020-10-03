#include <iostream>

using namespace std;

int main(){
  int a[] = {2, 3, 0, 1, 7, 8, 10};

  a[1] = a[0] * 2 + a[4];

  for (int i = 0; i < 7; i++)
  {
    cout << a[i] << " ";
  }

  return 0;
}