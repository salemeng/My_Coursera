#include <algorithm>
#include <iostream>
#include <vector>
#include <map>


using namespace std;


//using vector;

/*
int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;

  if (left + 1 == right)

    return a[left];
  //write your code here

  get_majority_element (a, 0, a.size()/2);
  get_majority_element (a, a.size()/2+1, a.size())

  return -1;
}
*/

int get_majority_element(vector<int> &a) {
  map<int, int> m;

  for (int i=0;i<=a.size();++i) {
    //if (mymap.empty()) { };
    if ( m.find(a[i]) == m.end() ) {
  // not found
       m[a[i]] = 1;
    } else {
  // found
       m[a[i]]=m[a[i]]+1;
    }
   }
    // show content:
  for (map<int,int>::iterator it=m.begin(); it!=m.end(); ++it)
  {
      if ((it->second)>(a.size()/2)) {
        return 1;
      }
    //cout << it->first << " => " << it->second << '\n';
  }
  return 0;
}

int main() {
 // map<int, int> m;
//  m[15] = 23;
 // cout << m[15] << '\n';

  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    cin >> a[i];
  }
  //cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
  cout << get_majority_element(a) << '\n';
}
