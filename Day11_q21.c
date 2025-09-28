#include <stdio.h>

int main() {
    char s[1000]; 

  
    printf("Hello, World!\n");

  
    fgets(s, sizeof(s), stdin);

   
    printf("%s", s);

    return 0;
}