#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct myclass1 {
  bool operator() (int i,int j) { return (i<j);}
} myobject1;

struct myclass2 {
  bool operator() (int i,int j) { return (i>j);}
} myobject2;

long long min_dot_product(vector<int> a, vector<int> b) {
  // write your code here

  //  sort a from max to min
  sort (a.begin(), a.end(), myobject2);

  // sort b from min to max
  sort (b.begin(), b.end(), myobject1);

  long long result = 0;
  for (size_t i = 0; i < a.size(); i++) {
    result += (long long) a[i] * b[i];
  //  cout << a[i] << '\t'<<b[i] <<endl;
  }
  return result;
}

int main() {
  size_t n;
  cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    cin >> b[i];
  }
  cout << min_dot_product(a, b) << endl;
}
