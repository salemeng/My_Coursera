// this is the naive solution
#include <iostream>
using std::cout;
using std::cin;
/*
int gcd(int a, int b) {
  //write your code here
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
*/

int gcd(int a, int b) {
  //write your code here
  if (b==0) {
  //  cout<<"b == 0 , return a = " <<a <<"\n";
    return a;
  }
  int a_dash = a%b;
 // cout<<"a_dash is  " <<a_dash <<"\n" ;
  return gcd(b, a_dash);
}

long long lcm(int a, int b) {
  //write your code here
  int gcd_a_b = gcd(a,b);  // get gcd of a and b
  long long lcm_a_b = (long long) a*b/gcd(a,b);
  return lcm_a_b;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << lcm(a, b) << std::endl;
  return 0;
}
