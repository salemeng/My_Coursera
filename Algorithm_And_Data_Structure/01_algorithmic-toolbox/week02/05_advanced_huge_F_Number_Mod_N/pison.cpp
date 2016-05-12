//fib_huge.cpp
#include <iostream>
#include <vector>
#include <cmath>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

long long calc_fib(int n) {
  if (n==0) {
  return 0;
  }
  vector<long long> F(n+1);
  F[0] = 0;
  F[1] = 1;
  for (int i=2; i<=n; ++i) {
    F[i]= F[i-1]+F[i-2];
  //  cout << i << " :"<< F[i] << "\n";
  }
  return F[n];

}
long long get_fibonaccihuge(long long n, long long m) {
  //write your code here
  //long long pison_m = pison(m);
  int pison_m =1;
    int max_pison = m*m+1;
  cout<<"max_pison is: " << max_pison << endl;
  vector<int> F(max_pison);
    for (int i =0 ; i< max_pison ; ++i) {
      F[i]  = get_fibonaccihuge (calc_fib(i),m);
      cout << i  << " : "<< F[i]<<endl;
  }
    for (int i =3 ; i<= max_pison ; ++i) {
          if (F[i]==0&&F[i+1]==1&&F[i+2]==1) {
            pison_m= i;
          }
    }


  cout <<"pison_m is " << pison_m <<'\n';
  long long x = n %(pison_m);
  cout << "reminder of n when divided by pison (m) is " << x <<'\n' ;
  return calc_fib(x)%m;
  //return 0;
}




int main () {

  int m; int n;
  cin>>n>>m;
  cout << get_fibonaccihuge(n,m)<<endl;
//  for (int i =3 ; i<= 100000 ; ++i) {
//    cout << i  << " : "<< pison(i)<<endl;
//  }
  return 0;
}