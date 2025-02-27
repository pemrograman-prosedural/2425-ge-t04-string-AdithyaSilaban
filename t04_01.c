// 12S24029 - Adithya Silaban
// 12S24009 - Kezia Pasaribu

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {

  char input[60];  
  scanf("%s", input);

  int length = strlen(input);
  int jumlah_blocks = length / 3;
  char blocks[jumlah_blocks][4];
  char hasil[jumlah_blocks];

  int i,j,k = 0;
  for (i = 0; i < jumlah_blocks; i++) {
    for (j = 0; j < 3; j++){
      blocks[i][j] = input [k++];

    }
    blocks[i][3] = '\0';
    hasil[i] = (char)atoi(blocks[i]);
    printf("%c", hasil[i]);

  }
  return 0;
}
  