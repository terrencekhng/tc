#include<iostream>
#include<string>
using namespace std;

class SpamChecker {
  public:
    string spamCheck(string, int, int);
};

string SpamChecker::spamCheck(string judgeLog, int good, int bad) {
  int i, score = 0;
  for (i = 0; i < judgeLog.length(); ++i) {
    if (judgeLog[i] == 'x') {
      score -= bad;
      if (score < 0)
        return "SPAM";
    }
    else {
      score += good;
    }
  }
  return "NOT SPAM";
}

int main() {
  class SpamChecker test;
  cout << test.spamCheck("ooooxxxo", 2, 3) << endl;
  cout << test.spamCheck("ooooxxxo", 3, 4) << endl;
  cout << test.spamCheck("xooooooooooooooooooooooooooo", 1000, 1) << endl;
  cout << test.spamCheck("oxxxxxxxxxxxxxxxxxxxxxxxxxxxx", 1000, 1) << endl;
  cout << test.spamCheck("ooxoxoxooxoxxoxoxooxoxoxoxxoxx", 15, 17) << endl;
  cout << test.spamCheck("oooxoxoxoxoxoxooxooxoxooxo", 16, 18) << endl;

  return 0;
}
