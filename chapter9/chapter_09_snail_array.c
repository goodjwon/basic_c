#include <stdio.h>

#define N 4

void snailArray(int arr[N][N]) {
    int val = 1;
    int top = 0, bottom = N-1, left = 0, right = N-1;

    while (val <= N*N) {
        for (int i = left; i <= right; i++)
            arr[top][i] = val++;
        top++;
        for (int i = top; i <= bottom; i++)
            arr[i][right] = val++;
        right--;
        for (int i = right; i >= left; i--)
            arr[bottom][i] = val++;
        bottom--;
        for (int i = bottom; i >= top; i--)
            arr[i][left] = val++;
        left++;
    }
}

int main() {
    int arr[N][N] = {0};
    snailArray(arr);
    printf("Snail Array:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
