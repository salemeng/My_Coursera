#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double get_optimal_value(double n, double capacity, vector<double> weights, vector<double> values) {
  double value = 0.0;
  double a = 0;
  // write your code here
  for (double i = 0; i < n; i++) {
    if (capacity ==0) {
      return value;
    }
      // choose item with max vi/wi
     double max = -1.0;
     double i_with_max_v_over_w = 0;
     for (double j = 0; j < n; j++) {
         if (weights[j] == 0) {continue;}
         if (max<= values[j]/weights[j]) {
           max = values[j]/weights[j] ;
           i_with_max_v_over_w = j;
         }
     }
     a = min(capacity, weights[i_with_max_v_over_w]);
     value = value + a*(values[i_with_max_v_over_w]/weights[i_with_max_v_over_w]);
     weights[i_with_max_v_over_w]= weights[i_with_max_v_over_w] - a;
     capacity = capacity -a;

  }
    return value;
  }


int main() {
  double n;
  double capacity;
  cin >> n >> capacity;
  vector<double> values(n);
  vector<double> weights(n);
  //vector<double> values_over_weights(n);
  for (double i = 0; i < n; i++) {
    cin >> values[i] >> weights[i];
   // values_over_weights[i]=values[i]/weights[i];
  }

  double optimal_value = get_optimal_value(n, capacity, weights, values);

  cout.precision(10);
  cout << optimal_value << endl;
  return 0;
}
