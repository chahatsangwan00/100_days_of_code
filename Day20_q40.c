#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** split_string(char* str, const char* delim, int* count) {
    int capacity = 10;
    char** result = malloc(capacity * sizeof(char*));
    *count = 0;

    char* token = strtok(str, delim);
    while (token) {
        if (*count >= capacity) {
            capacity *= 2;
            result = realloc(result, capacity * sizeof(char*));
        }
        result[*count] = malloc((strlen(token) + 1) * sizeof(char));
        strcpy(result[*count], token);
        (*count)++;
        token = strtok(NULL, delim);
    }
    return result;
}


char**** get_document(char* text, int* para_count) {
    int p_count = 0;
    char** paras = split_string(text, "\n", &p_count);

    char**** document = malloc(p_count * sizeof(char***));
    for (int i = 0; i < p_count; i++) {
        int s_count = 0;
        char** sentences = split_string(paras[i], ".", &s_count);

        document[i] = malloc(s_count * sizeof(char**));
        for (int j = 0; j < s_count; j++) {
            int w_count = 0;
            char** words = split_string(sentences[j], " ", &w_count);
            document[i][j] = words;
        }
        
        for (int j = 0; j < s_count; j++) free(sentences[j]);
        free(sentences);
    }
    *para_count = p_count;
    
 
    for (int i = 0; i < p_count; i++) free(paras[i]);
    free(paras);

    return document;
}


char*** get_paragraph(char**** document, int k) {
    return document[k];
}


char** get_sentence(char**** document, int k, int l) {
    return document[k][l];
}


char* get_word(char**** document, int k, int l, int m) {
    return document[k][l][m];
}