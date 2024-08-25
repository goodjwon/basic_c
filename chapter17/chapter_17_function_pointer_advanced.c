#include <stdio.h>

// Advanced Problem: Passing function pointers to a higher-order function
int multiply(int a, int b) {
    return a * b;
}

int performOperation(int (*operation)(int, int), int x, int y) {
    return operation(x, y);
}

int main() {
    int a = 5, b = 10;
    printf("Multiplication result: %d\n", performOperation(multiply, a, b));
    return 0;
}
