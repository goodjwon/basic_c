//사용자로부터 두 정수를 입력받아 덧셈 결과를 출력하는 프로그램 작성

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
    return 0;
}
