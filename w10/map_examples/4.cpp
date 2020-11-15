#include <iostream>
#include <map>

using namespace std;

void show(map<string, int> m){
  map<string, int>::iterator it = m.begin();
  while(it != m.end()){
    cout << it->first << " ===> " << it->second << endl;
    it++;
  }
}

pair<string, int> findStudentWithMaxPoint(map<string, int> m){
  map<string, int>::iterator it = m.begin();
  int maxi = 0;
  pair<string, int> ans;
  while(it != m.end()){
    if(it->second > maxi){
      maxi = it->second;
      ans = *it;
    }
    it++;
  }
  return ans;
}



int main(){
  map<string, int> student_points;

  student_points["student1"] = 20;
  student_points["student3"] = 40;
  student_points["student2"] = 10;
  student_points["student6"] = 25;

  show(student_points);

  pair<string, int> ans = findStudentWithMaxPoint(student_points);

  cout << "Max point student is \n";
  cout << ans.first << "==>" << ans.second << endl;


  return 0;
}