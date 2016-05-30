#include <iostream>
#include <cassert>
#include <vector>
using namespace std;


struct myclass1 {
  bool operator() (int i,int j) { return (i<j);}
} myobject1;

//using vector;

int binary_search(const vector<int> &a, int key) {
  int low = 0, high = (int)a.size();
  int mid =0;
   //write your code here
  while (low <= high) {
    mid = low + (high-low)/2;
    if (key == a[mid]) {
      return mid;
    } else if (key < a[mid]) {
       high = mid -1;
    } else {
       low = mid+1;
    }
  }
   return -1;
}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    //cout << linear_search(a, b[i]) << ' ';
      cout << binary_search(a, b[i]) << ' ';
  }
}
