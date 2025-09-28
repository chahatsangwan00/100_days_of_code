#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int cmp(const void *a, const void *b) {
    char *const *sa = a;
    char *const *sb = b;
    return strcmp(*sa, *sb);
}

void print_permutation(char **arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%s", arr[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");
}

void permute_unique(char **arr, int n, int l) {
    if (l == n) {
        print_permutation(arr, n);
        return;
    }

    for (int i = l; i < n; i++) {
      
        int skip = 0;
        for (int j = l; j < i; j++) {
            if (strcmp(arr[j], arr[i]) == 0) {
                skip = 1;
                break;
            }
        }
        if (skip) continue;

        swap(&arr[l], &arr[i]);
        permute_unique(arr, n, l + 1);
        swap(&arr[l], &arr[i]); 
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char **arr = malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        arr[i] = malloc(101 * sizeof(char)); 
        scanf("%s", arr[i]);
    }

    
    qsort(arr, n, sizeof(char*), cmp);

    permute_unique(arr, n, 0);

   
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}