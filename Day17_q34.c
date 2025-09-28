#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_shelves, total_queries;
    scanf("%d", &total_shelves);
    scanf("%d", &total_queries);

    int* total_number_of_books = (int*)calloc(total_shelves, sizeof(int));
    int** total_number_of_pages = (int**)malloc(total_shelves * sizeof(int*));
    for (int i = 0; i < total_shelves; i++) {
        total_number_of_pages[i] = (int*)malloc(1100 * sizeof(int)); // max 1100 books per shelf
    }

    for (int i = 0; i < total_queries; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            int x, y;
            scanf("%d %d", &x, &y);
           
            total_number_of_pages[x][total_number_of_books[x]] = y;
            total_number_of_books[x]++;
        } else if (type == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", total_number_of_pages[x][y]);
        } else if (type == 3) {
            int x;
            scanf("%d", &x);
            printf("%d\n", total_number_of_books[x]);
        }
    }

  
    for (int i = 0; i < total_shelves; i++) {
        free(total_number_of_pages[i]);
    }
    free(total_number_of_pages);
    free(total_number_of_books);

    return 0;
}