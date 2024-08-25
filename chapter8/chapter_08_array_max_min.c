#include <stdio.h>

int main() {
    int arr[5] = {12, 3, 7, 25, 10};
    int max = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Max value: %d\n", max);
    return 0;
}
