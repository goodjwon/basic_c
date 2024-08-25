#include <stdio.h>

// Function to print a string in reverse using recursion
void reverseString(char *str) {
    if (*str) {
        reverseString(str + 1);
        printf("%c", *str);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("Reversed string: ");
    reverseString(str);
    printf("\n");
    return 0;
}
