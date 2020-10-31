#include <iostream>

using namespace std;

void greeting(string name){
  cout << "Hi " << name << "! You are welcome!\n"; 
}


int main(){
  string s;

  cout << "Enter your name:\n";
  cin >> s;

  greeting(s);
  
  return 0;
}

