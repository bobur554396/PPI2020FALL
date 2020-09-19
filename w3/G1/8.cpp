#include <iostream>

using namespace std;

int main()
{
  // infinity loop
  // break
  int n = 1;

  for (;;)
  {
    cout << n << " ";
    n++;

    if(n == 1000)
      break;
  }

  return 0;
}