#include <stdio.h>

// Advanced Problem: Perform division and print the result as a float
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    double result = (double)a / b;
    printf("Result: %.2f\n", result);
    return 0;
}
