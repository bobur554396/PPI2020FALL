#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
  /*
  command value

  1 - add value (unique value -> set) ???
  2 - erase value
  3 - print all values
  4 - sort value --> ???
  0 - exit
  Input:
    1 3
    1 5
    1 6
    2 0
    1 2
    3
  */
  vector<int> v;

  vector<string> v2;
  v2.push_back("hello");
  v2.push_back("KBTU");

  string a = "hello";
  a += "kbtu";

  int command, value;

  for(;;){
    cout << "Enter command...\n";
    cin >> command;
    if(command == 0){
      break;
    } else if(command == 1){
      cout << "Enter value to add...\n";
      cin >> value;
      v.push_back(value);
    } else if (command == 2){
      cout << "Enter index of element to remove...\n";
      cin >> value;
      v.erase(v.begin() + value);
    } else if(command == 3){
      cout << "Current vector elements are...\n";
      vector<int>::iterator it;
      for(it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
      cout << endl;
    }
  }

  return 0;
}