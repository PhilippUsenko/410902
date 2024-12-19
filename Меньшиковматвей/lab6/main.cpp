#include <iostream>

#include <string>

using namespace std;

int main() {

  int length = 0;
  string line;
  string result = "";
  string word = "";

  cout << "Enter the words: ";
  getline(cin, line);

  for (int i = 0; i < line.size(); i++) {
    if (line[i] == '  ') {
      if (length != 0) {
        result += word[0];

        for (int i = 1; i < length; i++) {
          if (word[0] != word[i]) {
            result += word[i];
          }
        }
      }
      result += '  ';
      word = "";
      length = 0;
    }
    else {
      word += line[i];
      length++;
    }
  }

  if (length != 0) {
    result += word[0];

    for (int i = 1; i < length; i++) {
      if (word[0] != word[i]) {
        result += word[i];
      }
    }
  }

  cout << result;

  return 0;
}
