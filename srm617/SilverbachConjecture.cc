#include<vector>
#include<iostream>
#include<cmath>
using namespace std;

class SilverbachConjecture {
  public:
    vector<int> generate(int n);
    //int isPrime(int n);
};

int isPrime(int n) {
  if (n == 2)
    return 1;
  else if (n < 10 && n % 2 != 0)
    return 1;
  int i;
  for (i = 2; i < sqrt((double)n); ++i) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

vector<int> SilverbachConjecture::generate(int n) {
  vector<int> result(2, 0);
  int i;
  for (i = 1; i < n / 2; ++i) {
    if (isPrime(i) == 0 && isPrime(n - i) == 0) {
      result[0] = i;
      result[1] = n - i;
      return result;
    }
  }
}

int main() {

  class SilverbachConjecture test;
  vector<int> result = test.generate(48);
  cout << "result[0] = " << result[0] << "  result[1] = " << result[1] << endl;
  return 0;
}
