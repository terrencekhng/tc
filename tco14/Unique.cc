#include<iostream>
#include<string>
using namespace std;

class Unique {
  public:
    string removeDuplicates(string);
};

string Unique::removeDuplicates(string S) {
  int i, j;
  for (i = 1; i < S.length(); ++i) {
    for (j = 0; j < i; ++j) {
      if (S[i] == S[j])
        S[i] = ' ';
    }
  }

  while (S.find(' ') != -1) {
    for (i = S.find(' '); i < S.length(); ++i) {
      S[i] = S[i+1];
    }
  }

  return S;
}

int main() {
  class Unique test;
  cout << test.removeDuplicates("banana") << endl;
  cout << test.removeDuplicates("xxxx") << endl;
  cout << test.removeDuplicates("aardvark") << endl;
  cout << test.removeDuplicates("topcoder") << endl;

  return 0;
}
