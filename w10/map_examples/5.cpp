#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
  // 20BD0001   --- [{"PPI": 40}, {“Math": 39}, …]
  map< string, map<string, int> > student_subject_points;

  // 20BD0001   --- [{"PPI": 40}, {“Math": 39}, …]
  map< string, vector< pair<string, int> > > student_subject_points2;
  
  // 20BD0001   --- {“first_name”, “last_name”}
  map<string, pair<string, string> > student_full_names;


  return 0;
}