#include <stdio.h>
#include <string.h>

int main() {
  char input[50];
  char newString[50];
  int y = 0;
  printf("Enter input: ");
  scanf("%s", input);
  for (int i = 0; i < 50; ++i) {
    if (input[i] == '&') {
      newString[y] = input[i];
      ++y;
      newString[y] = 'a';
      ++y;
      newString[y] = 'm';
      ++y;
      newString[y] = 'p';
      ++y;
    } else if (input[i] == '<') {
      newString[y] = '&';
      ++y;
      newString[y] = 'l';
      ++y;
      newString[y] = 't';
      ++y;
    } else if (input[i] == '>') {
      newString[y] = '&';
      ++y;
      newString[y] = 'g';
      ++y;
      newString[y] = 't';
      ++y;
    } else {
      newString[y] = input[i];
      y++;
    }
  }

  printf("New string: %s \n", newString);
}
