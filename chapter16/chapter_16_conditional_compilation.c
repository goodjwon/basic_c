#include <stdio.h>

#define DEBUG

int main() {
    int a = 5, b = 10;
#ifdef DEBUG
    printf("Debugging mode: a = %d, b = %d\n", a, b);
#endif
    printf("Sum: %d\n", a + b);
    return 0;
}