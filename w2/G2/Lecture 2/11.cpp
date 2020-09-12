#include <iostream>

using namespace std;

int main(){

  int n;
  cin >> n; // 95 -> A+; 90 -> A-

  if(n >= 95)
    cout << "A+" << endl;
  else if(n >= 90)
    cout << "A-" << endl;
  else
    cout << "D" << endl;



  return 0;
}