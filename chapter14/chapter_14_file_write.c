#include <stdio.h>

int main() {
    FILE *fptr;
    char filename[100];
    char str[100];

    printf("Enter the filename to open for writing: ");
    gets(filename);

    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Cannot open file \n");
        return 1;
    }

    printf("Enter a string to write into the file: ");
    gets(str);

    fprintf(fptr, "%s", str);
    fclose(fptr);
    return 0;
}
