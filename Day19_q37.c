#include <stdio.h>
#include <string.h>

// Swap two strings
void swap_strings(const char **a, const char **b) {
    const char *temp = *a;
    *a = *b;
    *b = temp;
}

// Count distinct characters in a string
int distinct_char_count(const char *s) {
    int freq[26] = {0};
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (!freq[s[i] - 'a']) {
            freq[s[i] - 'a'] = 1;
            count++;
        }
    }
    return count;
}

// Sorting function
void string_sort(const char **arr, const int cnt, int (*cmp_func)(const char* a, const char* b)) {
    for (int i = 0; i < cnt - 1; i++) {
        for (int j = i + 1; j < cnt; j++) {
            if (cmp_func(arr[i], arr[j]) > 0) {
                swap_strings(&arr[i], &arr[j]);
            }
        }
    }
}




int lexicographic_sort(const char *a, const char *b) {
    return strcmp(a, b);
}


int lexicographic_sort_reverse(const char *a, const char *b) {
    return strcmp(b, a);
}

int sort_by_number_of_distinct_characters(const char *a, const char *b) {
    int da = distinct_char_count(a);
    int db = distinct_char_count(b);
    if (da != db)
        return da - db;
    return strcmp(a, b);
}


int sort_by_length(const char *a, const char *b) {
    int la = strlen(a);
    int lb = strlen(b);
    if (la != lb)
        return la - lb;
    return strcmp(a, b);
}