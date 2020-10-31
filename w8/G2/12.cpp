#include <iostream>
#include <cmath>

using namespace std;

// 6 - 2 3 4 5 - not prime
// 5 - 2 3 4 - prime


// 20 - 2 4 5 10
// n - all dividers of given number are localated in range [2 ... sqrt(n / 2)]
bool isPrime(int n){
  for(int i = 2; i <= n / 2; i++)
    if(n % i == 0)
      return false;
  return true;
}

int main(){

  // isPrime - 2 3 5 7 11 13 17 19 21 ...
  int n;
  
  // while(true)
  for(;;){
    cin >> n;
    if(n == -1)
      break;

    if(isPrime(n))
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}

