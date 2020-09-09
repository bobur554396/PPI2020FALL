#include <iostream>

using namespace std;

int main(){
  int a, b, result;

  cout << "Enter the first number...";
  cin >> a;

  cout << "Enter the second number...";
  cin >> b;

  cout << a << "+" << b << "=" << a + b << endl;
  cout << a << "-" << b << "=" << a - b << endl;
  cout << a << "*" << b << "=" << a * b << endl;
  cout << a << "/" << b << "=" << a / b << endl;
  cout << a << "%" << b << "=" << a % b << endl;

  // 10 / 2 = 5
  // 12 / 5 = 2
  // 12 % 5 = 2
  // 10 % 2 = 0
  // 11 % 2 = 1
  // 2 % 10 = 2

  return 0;
}
