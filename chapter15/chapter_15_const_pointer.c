#include <stdio.h>

int main() {
    int a = 10;
    const int *ptr = &a;
    printf("Value of a: %d\n", a);
    printf("Value pointed by ptr: %d\n", *ptr);
    // *ptr = 20; // Uncommenting this line will cause a compilation error
    a = 20;
    printf("New value of a: %d\n", a);
    printf("Value pointed by ptr: %d\n", *ptr);
    return 0;
}
