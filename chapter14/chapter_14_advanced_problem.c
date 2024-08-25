#include <stdio.h>

// Advanced Problem: Append text to an existing file
int main() {
    FILE *fptr;
    char filename[100];
    char str[100];

    printf("Enter the filename to append text: ");
    gets(filename);

    fptr = fopen(filename, "a");
    if (fptr == NULL) {
        printf("Cannot open file \n");
        return 1;
    }

    printf("Enter a string to append: ");
    gets(str);

    fprintf(fptr, "\n%s", str);
    fclose(fptr);
    return 0;
}
