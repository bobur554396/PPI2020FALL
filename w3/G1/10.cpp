#include <iostream>

using namespace std;

int main()
{
  // break

  for (int i = 1; i < 20; i++)
  {
    if (i % 4 == 0)
      break;
    else
      cout << i << " ";
  }

  return 0;
}