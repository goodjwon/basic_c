#include <stdio.h>

// Advanced Problem: Print multiplication table using nested loops
int main() {
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d * %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
