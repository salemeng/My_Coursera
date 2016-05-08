//fib.cpp original
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

/*
int calc_fib(int n) {
    if (n <= 1)
        return n;

    return calc_fib(n - 1) + calc_fib(n - 2);
}
*/
int calc_fib(int n) {
  if (n==0) {
  return 0;
  }
  vector<int> F(n+1);
  F[0] = 0;
  F[1] = 1;
  for (int i=2; i<=n; ++i) {
    F[i]= F[i-1]+F[i-2];
  //  cout << i << " :"<< F[i] << "\n";
  }
  return F[n];

}

int main() {
  int n = 0; cin >> n;
  // for (int n=0; n<=45; n++)
    cout << calc_fib(n) << '\n';
  return 0;
}
