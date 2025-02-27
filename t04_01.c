// 12S24029 - Adithya Silaban
// 12S24009 - Kezia Pasaribu

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int _argv, char **_argc) {

  char input[61]; 
    fgets(input, sizeof(input), stdin); 
    
    
    size_t length = strlen(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--;
    }

    
    if (length % 3 != 0) {
        
        return 1;
    }

    int jumlah_blocks = length / 3;
    char hasil[jumlah_blocks + 1]; 
    int k = 0;

    for (int i = 0; i < jumlah_blocks; i++) {
        char blok[4]; 
        strncpy(blok, &input[k], 3);
        blok[3] = '\0'; 
        hasil[i] = (char)atoi(blok); 
        k += 3;
    }

    hasil[jumlah_blocks] = '\0'; 
    printf("%s\n", hasil); 

    return 0;
}