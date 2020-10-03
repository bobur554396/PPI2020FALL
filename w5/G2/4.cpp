#include <iostream>

using namespace std;

int main()
{
  // Array
  int a[] = {2, 5, 10, 0, -1};

  // cout << a[0] << " ";
  // cout << a[1] << " ";
  // cout << a[2] << " ";
  // cout << a[3] << " ";
  // cout << a[4] << " ";

  cout << *(a + 0) << endl;
  cout << *(a + 1) << endl;
  cout << *(a + 2) << endl;
  cout << *(a + 3) << endl;
  cout << *(a + 4) << endl;

  // for (int i = 0; i < 5; i++)
  //   cout << a[i] << " ";

  return 0;
}