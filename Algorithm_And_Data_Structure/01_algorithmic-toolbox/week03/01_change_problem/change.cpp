//change problem
#include <iostream>

int get_change(int n) {
  //write your code here
  int full_change = n;
  int count = 0;
  int change = 10;
  while (full_change>0) {
    full_change = full_change-change;
    //std::cout<<"full_change = " << full_change <<'\n';
    if (full_change>=0) {
      count = count + 1;
     // std::cout<<change<<"+";
      continue ;
    } else {
       full_change = full_change+change;
      //  std::cout<<"full_change = " << full_change <<'\n';
        if (change == 10 ) {
       //   std::cout << "set change to 5" <<'\n';
          change = 5;
        } else if (change == 5 )  {
       //   std::cout << "set change to 1" <<'\n';
          change = 1;
        } else {
       //   std::cout<<"I am breaking"<<'\n';
          //  std::cout<<'1';
          count = count +1;
          break;
        }
    }
}
  //std::cout<<'\n';
  return count;
}

int main() {
  int n;
  std::cin >> n;
  std::cout << get_change(n) << '\n';
}

