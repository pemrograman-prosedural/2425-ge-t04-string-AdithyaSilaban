// 12S24029 - Adithya Silaban
// 12S24009 - Kezia Pasaribu

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {

  char input[20];
  fgets(input, sizeof(input), stdin);

  int length = strlen(input);
  if (length > 0 && input[length - 1] == '\n') {
    input[length - 1] = '\0';
  }
    for (int i = 0; i < length - 1; i++) {
      printf("%03d", input[i]);
    }
    
  print("013");



  return 0;
}
