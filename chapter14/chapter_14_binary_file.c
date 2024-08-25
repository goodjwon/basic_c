#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    int num;
    char filename[100];

    printf("Enter the filename to open for writing in binary mode: ");
    gets(filename);

    fptr = fopen(filename, "wb");
    if (fptr == NULL) {
        printf("Cannot open file \n");
        return 1;
    }

    for (num = 1; num <= 10; num++) {
        fwrite(&num, sizeof(int), 1, fptr);
    }
    fclose(fptr);

    fptr = fopen(filename, "rb");
    if (fptr == NULL) {
        printf("Cannot open file \n");
        return 1;
    }

    while (fread(&num, sizeof(int), 1, fptr)) {
        printf("%d ", num);
    }
    printf("\n");

    fclose(fptr);
    return 0;
}
