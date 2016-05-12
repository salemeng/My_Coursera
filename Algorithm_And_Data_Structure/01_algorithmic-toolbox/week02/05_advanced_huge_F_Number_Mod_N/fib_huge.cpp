/*
Failed case #7/22: (Wrong answer)

Input:
99999999999999999 2

Your output:
1

Correct output:
0
 (Time used: 0.01/1.00, memory used: 23392256/536870912.)

*/


//fib_huge.cpp
#include <iostream>
#include <vector>
#include <cmath>


using std::vector;
using std::cin;
using std::cout;
using std::endl;




/*
long long get_fibonaccihuge(long long n, long long m) {
  //write your code here
  long long pison_m = pison(m);
  cout <<"pison_m is " << pison_m <<'\n';
  long long x = n %(pison_m);
  cout << "reminder of n when divided by pison (m) is " << x <<'\n' ;
  return calc_fib(x)%m;
  #return 0;
}
*/

long long get_fibonaccihuge(long long n, long long m) {
  //write your code here
 // cout << "calculate get_fibonaccihuge for n= " << n << " and m = " << m <<endl;
    long long pison_m =1;
    long long max_pison = m*m+1;
 // cout<<"max_pison is: " << max_pison << endl;

     int F_0 = 0;
     int F_1 = 1;
     int F_2 = 1;
     vector <int> F;
    for (long long i =2 ; i< max_pison ; ++i) {
      F_2  =  (F_1+F_0)%m;
      //cout << i  << " : "<< F_2<<endl;
      if (F_2==1&&F_1==0) {
            pison_m= i-1; break;
     }
      F_0 = F_1;
      F_1 = F_2;
   }

  //cout <<"pison_m is " << pison_m <<'\n';
  long long r= n %(pison_m);
  //cout << "reminder of n = " << n <<" when divided by pison_m = "<< pison_m<< " is r = " << r <<'\n' ;
    if (r==0) {
      return 0;
    }
    if (r<pison_m) {

     int F_0 = 0;
     int F_1 = 1;
     int F_2 = 1;
     for (long long i =2 ; i<= r ; ++i) {
      F_2  =  (F_1+F_0)%m;
     // cout << i  << " : "<< F_2<<endl;
      F_0 = F_1;
      F_1 = F_2;
   }

        return F_2;
  }
    return get_fibonaccihuge(r,m);
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << get_fibonaccihuge(n, m) << '\n';
}
