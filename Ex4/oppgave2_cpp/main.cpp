#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
  string word;

  cout << "Word: ";
  cin >> word;
  // word = "<test&test>";

  word = regex_replace(word, regex("&"), "&amp"); // replace 'def' -> 'klm'
  word = regex_replace(word, regex("<"), "&lt");
  word = regex_replace(word, regex(">"), "&gt");
  cout << "New word: " << word << endl;
}
