#include <iostream>

using namespace std;

int main()
{
  /*
    You are given number N and N elements.
    Show all digits from given array
    Input:
    Kbtu
    Output:
    KBTU
  */
  string s;
  cin >> s;

  // cout << (int)'A' << " " << (int)'Z' << endl;
  // cout << (int)'a' << " " << (int)'z' << endl;

  for (int i = 0; i < s.size(); i++){
    int code = (int)s[i];
    if (code >= 97 && code <= 122)
      code -= 32;
    cout << (char) code;
  }

  return 0;
}