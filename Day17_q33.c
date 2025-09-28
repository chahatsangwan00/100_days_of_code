#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    scanf("%s", str);

    int freq[10] = {0}; 

    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            int digit = str[i] - '0';  
            freq[digit]++;
        }
    }

    // Print frequencies
    for (int i = 0; i < 10; i++) {
        printf("%d", freq[i]);
        if (i < 9) printf(" ");
    }
    printf("\n");

    return 0;
}