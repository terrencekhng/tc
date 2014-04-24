#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

class EllysSortingTrimmer {
  public:
    string getMin(string, int);
};

string EllysSortingTrimmer::getMin(string S, int L) {
  int length = S.length();
  int i;
  for (i = length - L; i >= 0; --i) {
    sort(S.begin() + i, S.begin() + i + L);
  }
  
  return string(S.begin(), S.begin() + L);
}

int main() {
  class EllysSortingTrimmer test;
  cout << test.getMin("ESPRIT", 3) << endl;

  return 0;
}
