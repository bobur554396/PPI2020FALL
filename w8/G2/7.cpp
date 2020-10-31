#include <iostream>

using namespace std;

void greeting(string student_name);

int main(){

  string s;
  cout << "Enter your name\n";
  cin >> s;

  greeting(s);
  
  return 0;
}

void greeting(string student_name){
  cout << "Hi " << student_name << "! You are welcome!\n";  
}
