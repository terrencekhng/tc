#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class LongWordsDiv2 {
  public:
    string find(string);
};

string LongWordsDiv2::find(string word) {
  int length = word.length();
  int i, j, k, l;
  for (i = 0; i < length - 1; ++i) {
    if (word[i] == word[i+1])
      return "Dislikes";
  }

  for (i = 0; i < length - 4; ++i) {
    for (j = i + 1; j < length - 3; ++j) {
      for (k = j + 1; k < length; ++k) {
        if (word[i] == word[k]) {
          for (l = k + 1; l < length; ++l) {
            if (word[j] == word[l])
              return "Dislikes";
          }
        }
      }
    }
  }

  return "Likes";

}

int main() {
  class LongWordsDiv2 test;
  cout << test.find("ABBA") << endl;
  cout << test.find("THETOPCODER") << endl;
  cout << test.find("ABACADA") << endl;
  cout << test.find("A") << endl;
  cout << test.find("ABA") << endl;
  cout << test.find("ABCBA") << endl;
  cout << test.find("VAMOSGIMNASIA") << endl;

  return 0;
}
