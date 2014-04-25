#include<iostream>
#include<string>
using namespace std;

class WritingWords {
  public:
    int write(string);
};

int WritingWords::write(string word) {
  int sum = 0;
  int i = 0;
  while (word[i] != '\0') {
    sum += word[i] - 64;
    i++;
  }

  return sum;
}

int main() {
  class WritingWords test;
  cout << test.write("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ") << endl;

  return 0;
}
