#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*operation)(int, int);
    int choice, x, y;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Choose operation: 1. Add 2. Subtract: ");
    scanf("%d", &choice);

    if (choice == 1)
        operation = add;
    else
        operation = subtract;

    printf("Result: %d\n", operation(x, y));
    return 0;
}
