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
    int n = 24 ;
   //cin >> n;
    vector<int> F(n);
   for (int i=0; i<=n; ++i) {
     F[i] = calc_fib(i);
     cout << F[i] << '\t';
   }

  cout <<'\n';
int F_mod_j = 0;
  for (int j = 2; j <=5;++j) {
    cout <<'\n';
     for (int i=0; i<=n; ++i) {
       F_mod_j = F[i]%j ;
       cout << F_mod_j << '\t';
     }

   }


    return 0;
}
