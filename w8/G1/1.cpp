#include <iostream>

using namespace std;

int main(){
  int a[] = {2, -1, 10, 6};

  sort(a, a + 4);
  reverse(a, a + 4);

  for(int i = 0; i < 4; i++)
    cout << a[i] << " ";

  return 0;
}