#include <iostream>

using namespace std;

int main()
{
  bool a = true; // 1
  bool b = false; // 0

  cout << (a & b) << endl; // and (1 * 0) = 0
  cout << (a | b) << endl; // or (1 + 0) = 1
  cout << (a ^ b) << endl; // xor (1 ^ 0) = 1

  return 0;
}
