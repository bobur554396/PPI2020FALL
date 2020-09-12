#include <iostream>

using namespace std;

int main()
{

  int a, b;
  cin >> a >> b; // 2 2 

  if (a > b){
    cout << a << endl;
  } else if(b > a) {
    cout << b << endl;
  } else {
    cout << "they are equal" << endl;
  }

  return 0;
}