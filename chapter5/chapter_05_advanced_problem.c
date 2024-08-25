#include <stdio.h>

// Advanced Problem: Find the maximum and minimum of three numbers
int main() {
    int a = 15, b = 10, c = 25;
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    int min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
