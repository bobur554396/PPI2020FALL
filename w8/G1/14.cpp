#include <iostream>
#include <cmath>

using namespace std;

// 2 3 5 7 11 13 17 19 ... - prime numbers
// n - all dividers are in range [2...sqrt(n / 2)]
// 20 - 2 4 5 10 -- [2 ... 10]

bool isPrime(int n){
  for(int i = 2; i <= n / 2; i++)
    if(n % i == 0)
      return false;
  
  return true;
}

int main(){
  
  int n;
  // for(;;){
  while(true){
    cin >> n;
    if(n == -1)
      break;

    if(isPrime(n))
      cout << "YES \n";
    else
      cout << "NO \n";
  }
  
  return 0;
}


