#include <iostream>

using namespace std;

int main()
{
  /*
    You are given number N and N elements.
    Show all digits from given array
    Input:
    k)&b43t8(=%u
    Output:
    438 
  */
  string s;
  cin >> s;

  // cout << (int)'0' << " " << (int)'9' << endl;

  for(int i = 0; i < s.size(); i++){
    int code = (int) s[i];    
    if(code >= 48 && code <= 57)
      cout << s[i] << " ";
  }

  return 0;
}