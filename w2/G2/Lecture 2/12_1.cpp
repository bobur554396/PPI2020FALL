#include <iostream>

using namespace std;

int main()
{
  // - [ ] can you draw triangle using given numbers: a, b, c
  int a, b, c;

  cin >> a >> b >> c;

  // nested if/else block

  if (a < b + c){
    if(b < a + c) {
      if(c < a + b){
        cout << "YES";
      }
    }
  } else {
    cout << "NO";
  }

  return 0;
}