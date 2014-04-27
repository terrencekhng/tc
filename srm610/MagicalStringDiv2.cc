#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

class MagicalStringDiv2 {
  public:
    int minimalMoves(string);
};

int MagicalStringDiv2::minimalMoves(string S) {
  int half = S.length() / 2;
  int i, moves = 0;
  for (i = 0; i < half; ++i) {
    if (S[i] == '<') {
      S[i] = '>';
      moves += 1;
    }
  }

  for (i = half; i < S.length(); ++i) {
    if (S[i] == '>') {
      S[i] = '<';
      moves += 1;
    }
  }

  return moves;
}

int main() {
  class MagicalStringDiv2 test;
  cout << test.minimalMoves(">><<><") << endl;
  cout << test.minimalMoves(">>>><<<<") << endl;
  cout << test.minimalMoves("<<>>") << endl;
  cout << test.minimalMoves("<><<<>>>>><<>>>>><>><<<>><><><><<><<<<<><<>>><><><") << endl;

  return 0;
}
