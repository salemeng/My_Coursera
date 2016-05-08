#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

long long  MaxPairwiseProduct(const vector<int>& numbers) {
    long long int result = 0;
    int max_1  = 0;
    int max_2  = 0;
      int n = numbers.size();
        for (int i = 0; i < n; ++i) {
                           if (numbers[i] > max_1) {
                                 max_2 = max_1; //cout << " set max_2 to " << max_2 <<"\n";
                                 max_1 = numbers[i]; //cout << "set max_1 to " << max_1 << "\n";
                                      }
                            else if (numbers[i] > max_2) {
                                 max_2 = numbers[i];// cout << "set max_2 to " << max_2 << "\n";
                                      }
                }
          result = (long long) max_1 * max_2;
          //cout<< max_1 << " " << max_2 << "\n";
          return result;
}

int main() {
      int n;
          cin >> n;
              vector<int> numbers(n);
                  for (int i = 0; i < n; ++i) {
                        cin >> numbers[i];
                                }

                      long long result = MaxPairwiseProduct(numbers);
                          cout << result << "\n";
                              return 0;
}

