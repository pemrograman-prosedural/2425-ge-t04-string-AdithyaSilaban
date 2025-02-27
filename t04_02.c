// 12S24029 - Adithya Silaban
// 12S24009 - Kezia Pasaribu

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {

  char input[20];
scanf("%20[^\n]", input);



    for (int i = 0; i < strlen(input); i++) {
      printf("%03d", input[i]);
    } 
    
  printf("013");



  return 0;
}
