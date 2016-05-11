#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

int get_fibonacci_last_digit(int n) {
    if (n==0) {
  return 0;
  }
  vector<int> F(n+1);
  F[0] = 0;
  F[1] = 1;
  for (int i=2; i<=n; ++i) {
    F[i]= (F[i-1]+F[i-2]) % 10;
    //cout << i << " :"<< F[i] << "\n";
  }
  return F[n];
}


int main() {
  int n;
  cin >> n;
  int c = get_fibonacci_last_digit(n);
  cout << c << '\n';
}
