#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
  /*
  Implementation of Set using Vector;

  commands are:
    'a' - add new value (unique)
    'r' - remove value
    'f' - find value
    'p' - print all values
    'q' - to exit
  
  Input:
    a 4
    a 6
    a 8
    r 0
    a 10
    f 6
    p
    q
  */
  char command;
  int value;

  vector<int> v;

  for(;;){
    cout << "Enter any command: [a, r, f, p, q]\n";
    cin >> command;
    if(command == 'a'){
      cout << "Enter number to add into box\n";
      cin >> value;
      if(find(v.begin(), v.end(), value) == v.end()){
        v.push_back(value);
        sort(v.begin(), v.end());
      }
    } else if(command == 'r'){
      cout << "Enter index of the element to remove from box\n";
      cin >> value;
      v.erase(v.begin() + value);
    } else if(command == 'f'){
      cout << "Enter number to find in box\n";
      cin >> value;
      if(find(v.begin(), v.end(), value) != v.end())
        cout << "Found\n";
      else 
        cout << "Not found\n";
    } else if(command == 'p'){
        for(int i = 0; i < v.size(); i++)
          cout << v[i] << " ";
        cout << endl;
    } else if(command == 'q'){
      cout << "Bye!";
      break;
    }
  }


  return 0;
}