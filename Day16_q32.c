#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

 
    fgets(sentence, sizeof(sentence), stdin);

 
    sentence[strcspn(sentence, "\n")] = 0;

  
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }

    return 0;
}