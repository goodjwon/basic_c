#include <stdio.h>

inline int square(int x) {
    return x * x;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square of %d is %d\n", num, square(num));
    return 0;
}
