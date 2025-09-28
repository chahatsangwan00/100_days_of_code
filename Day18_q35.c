#include <stdio.h>


int nth_term(int n, int t1, int t2, int t3) {
    if (n == 1) return t1;
    if (n == 2) return t2;
    if (n == 3) return t3;
    return nth_term(n - 1, t1, t2, t3) + 
           nth_term(n - 2, t1, t2, t3) + 
           nth_term(n - 3, t1, t2, t3);
}

int main() {
    int n, t1, t2, t3;
    scanf("%d", &n);
    scanf("%d %d %d", &t1, &t2, &t3);

    printf("%d\n", nth_term(n, t1, t2, t3));
    return 0;
}