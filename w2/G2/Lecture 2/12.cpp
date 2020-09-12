#include <iostream>

using namespace std;

int main(){
  // - [ ] can you draw triangle using given numbers: a, b, c
  int a, b, c;

  cin >> a >> b >> c;

  if(a < b + c && b < a + c && c < a + b)
    cout << "YES";
  else
    cout << "NO";
  

  return 0;
}