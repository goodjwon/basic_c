### 1장. C 프로그래밍 입문

**샘플 코드 1: Hello World 프로그램**
```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

**샘플 코드 2: 간단한 덧셈 프로그램**
```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}
```

**샘플 코드 3: 사용자 정의 함수 사용**
```c
#include <stdio.h>

void printMessage() {
    printf("This is a custom function!\n");
}

int main() {
    printMessage();
    return 0;
}
```

**심화 문제 1: 두 숫자의 곱을 계산하여 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int x = 7;
    int y = 9;
    int product = x * y;
    printf("Product: %d\n", product);
    return 0;
}
```

**심화 문제 2: 사용자로부터 두 정수를 입력받아 덧셈 결과를 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);
    return 0;
}
```

### 2장. 자료형

**샘플 코드 1: 다양한 자료형 사용하기**
```c
#include <stdio.h>

int main() {
    int integer = 100;
    float floating = 3.14;
    char character = 'A';
    printf("Integer: %d, Float: %.2f, Char: %c\n", integer, floating, character);
    return 0;
}
```

**샘플 코드 2: `sizeof` 연산자를 사용하여 자료형의 크기 출력**
```c
#include <stdio.h>

int main() {
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));
    return 0;
}
```

**샘플 코드 3: 상수 선언 및 사용**
```c
#include <stdio.h>

int main() {
    const int DAYS_IN_WEEK = 7;
    printf("There are %d days in a week.\n", DAYS_IN_WEEK);
    return 0;
}
```

**심화 문제 1: 두 변수의 크기를 비교하고 큰 값을 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int a = 5;
    int b = 8;
    int max = (a > b) ? a : b;
    printf("The larger number is: %d\n", max);
    return 0;
}
```

**심화 문제 2: `double` 자료형을 사용하여 반지름을 입력받아 원의 면적을 계산하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    double area = 3.14159 * radius * radius;
    printf("Area of the circle: %.2lf\n", area);
    return 0;
}
```

### 3장. 표준 입출력 도구

**샘플 코드 1: `getchar()`와 `putchar()`를 사용한 문자 입출력**
```c
#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    c = getchar();
    printf("You entered: ");
    putchar(c);
    printf("\n");
    return 0;
}
```

**샘플 코드 2: 문자열 입출력 `gets()`와 `puts()` 사용**
```c
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    printf("You entered: ");
    puts(str);
    return 0;
}
```

**샘플 코드 3: `printf()`와 `scanf()`를 사용한 입출력**
```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}
```

**심화 문제 1: 사용자로부터 이름과 나이를 입력받아 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Name: %s, Age: %d\n", name, age);
    return 0;
}
```

**심화 문제 2: 문자열을 입력받아 각 문자를 한 줄에 하나씩 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
        putchar('\n');
    }
    return 0;
}
```

### 4장. 연산자 - 기본

**샘플 코드 1: 기본 산술 연산자 사용**
```c
#include <stdio.h>

int main() {
    int a = 10, b = 3;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    return 0;
}
```

**샘플 코드 2: 복합 대입 연산자 사용**
```c
#include <stdio.h>

int main() {
    int a = 10;
    a += 5;
    printf("a += 5 -> a = %d\n", a);
    a *= 2;
    printf("a *= 2 -> a = %d\n", a);
    return 0;
}
```

**샘플 코드 3: 형변환 연산자 사용**
```c
#include <stdio.h>

int main() {
    int a = 5, b = 2;
    double result = (double)a / b;
    printf("Result of a / b = %.2f\n", result);
    return 0;
}
```

**심화 문제 1: 두 수를 입력받아 사칙연산을 수행하고 결과를 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("x %% y = %d\n", x % y);
    return 0;
}
```

**심화 문제 2: 비트 연산자를 사용하여 두 수의 AND, OR, XOR 결과를 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int x = 5, y = 3;
    printf("x & y = %d\n", x & y);
    printf("x | y = %d\n", x | y);
    printf("x ^ y = %d\n", x ^ y);
    return 0;
}
```

### 5장. 연산자 - 응용

**샘플 코드 1: `sizeof` 연산자를 사용한 변수 크기 출력**
```c
#include <stdio.h>

int main() {
    int a = 10;
    double b = 3.14;
    printf("Size of a: %lu bytes\n", sizeof(a));
    printf("Size of b: %lu bytes\n", sizeof(b));
    return 0;
}
```

**샘플 코드 2: 논리 연산자 사용**
```c
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    if (a > 0 && b > 0) {
        printf("Both a and b are positive.\n");
    }
    return 0;
}
```

**샘플 코드 3: 삼항 연산자를 사용한 조건부 연산**
```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int max = (a > b) ? a : b;
    printf("Max: %d\n", max);
    return 0

;
}
```

**심화 문제 1: 두 수를 입력받아 크기를 비교하고 더 큰 수를 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    int max = (x > y) ? x : y;
    printf("The larger number is: %d\n", max);
    return 0;
}
```

**심화 문제 2: 조건부 연산자를 사용하여 양수, 음수, 0을 판별하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    const char* result = (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero";
    printf("The number is: %s\n", result);
    return 0;
}
```

### 6장. 기본 제어문

**샘플 코드 1: `if` 문을 사용한 양수/음수 판별**
```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("Positive number.\n");
    } else if (num < 0) {
        printf("Negative number.\n");
    } else {
        printf("Zero.\n");
    }
    return 0;
}
```

**샘플 코드 2: `if-else` 문을 사용한 두 수 비교**
```c
#include <stdio.h>

int main() {
    int a = 5, b = 10;
    if (a > b) {
        printf("a is greater than b.\n");
    } else {
        printf("a is not greater than b.\n");
    }
    return 0;
}
```

**샘플 코드 3: `switch-case` 문을 사용한 숫자에 따른 출력**
```c
#include <stdio.h>

int main() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day\n");
    }
    return 0;
}
```

**심화 문제 1: 입력된 수가 짝수인지 홀수인지 판단하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Even number.\n");
    } else {
        printf("Odd number.\n");
    }
    return 0;
}
```

**심화 문제 2: 1에서 3까지의 숫자를 입력받아 해당하는 요일을 출력하고, 나머지는 "Invalid"를 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number (1-3): ");
    scanf("%d", &num);
    switch(num) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        default: printf("Invalid\n");
    }
    return 0;
}
```

### 7장. 반복문

**샘플 코드 1: `while` 문을 사용하여 1부터 10까지의 합 계산**
```c
#include <stdio.h>

int main() {
    int sum = 0, i = 1;
    while (i <= 10) {
        sum += i;
        i++;
    }
    printf("Sum from 1 to 10: %d\n", sum);
    return 0;
}
```

**샘플 코드 2: `for` 문을 사용하여 구구단 출력**
```c
#include <stdio.h>

int main() {
    int i, j;
    for (i = 2; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
```

**샘플 코드 3: `do-while` 문을 사용하여 최소 한 번 실행 보장**
```c
#include <stdio.h>

int main() {
    int num;
    do {
        printf("Enter a number greater than 10: ");
        scanf("%d", &num);
    } while (num <= 10);
    printf("You entered: %d\n", num);
    return 0;
}
```

**심화 문제 1: 1부터 100까지의 홀수의 합을 계산하여 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("Sum of odd numbers from 1 to 100: %d\n", sum);
    return 0;
}
```

**심화 문제 2: `while` 문을 사용하여 사용자가 입력한 양수의 합계를 계산하고, 음수가 입력되면 종료하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int sum = 0, num;
    while (1) {
        printf("Enter a positive number (negative to stop): ");
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        sum += num;
    }
    printf("Sum: %d\n", sum);
    return 0;
}
```

### 8장. 배열

**샘플 코드 1: 1차원 배열 선언 및 초기화**
```c
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
```

**샘플 코드 2: 배열의 최댓값 찾기**
```c
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
```

**샘플 코드 3: 2차원 배열을 사용하여 행렬 덧셈**
```c
#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

**심화 문제 1: 사용자가 입력한 5개의 정수를 저장하고, 평균을 계산하여 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int arr[5], sum = 0;
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Average: %.2f\n", sum / 5.0);
    return 0;
}
```

**심화 문제 2: 2차원 배열을 사용하여 3x3 행렬의 전치 행렬(transpose) 계산 프로그램 작성**
```c
#include <stdio.h>

int main() {
    int A[3][3], T[3][3];

    printf("Enter 9 elements of the matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
            T[j][i] = A[i][j];
        }
    }

    printf("Transpose

 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```


### 9장. 배열을 활용한 프로그래밍 기법

**샘플 코드 1: 선택 정렬을 사용한 배열 정렬**
```c
#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIdx;
    for (i = 0; i < n-1; i++) {
        minIdx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
```

**샘플 코드 2: 버블 정렬을 사용한 배열 정렬**
```c
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
```

**샘플 코드 3: 달팽이 배열 채우기**
```c
#include <stdio.h>

#define N 4

void fillSnail(int arr[N][N]) {
    int val = 1;
    int top = 0, bottom = N-1, left = 0, right = N-1;

    while (val <= N*N) {
        for (int i = left; i <= right; i++) arr[top][i] = val++;
        top++;
        for (int i = top; i <= bottom; i++) arr[i][right] = val++;
        right--;
        for (int i = right; i >= left; i--) arr[bottom][i] = val++;
        bottom--;
        for (int i = bottom; i >= top; i--) arr[i][left] = val++;
        left++;
    }
}

int main() {
    int arr[N][N];
    fillSnail(arr);
    printf("Snail filled matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

**심화 문제 1: 1차원 배열을 오름차순 또는 내림차순으로 정렬하는 함수 작성**
```c
#include <stdio.h>

void sortArray(int arr[], int n, int ascending) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (ascending ? (arr[j] > arr[j+1]) : (arr[j] < arr[j+1])) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ascending = 1;
    sortArray(arr, n, ascending);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
```

**심화 문제 2: 이진 검색을 사용하여 정렬된 배열에서 특정 값 찾기**
```c
#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int result = binarySearch(arr, n, key);
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);
    return 0;
}
```

### 10장. 함수에 대한 기본 이론

**샘플 코드 1: 두 정수를 더하는 함수**
```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;
    int sum = add(num1, num2);
    printf("Sum: %d\n", sum);
    return 0;
}
```

**샘플 코드 2: 반환값이 없는 함수 (`void` 함수)**
```c
#include <stdio.h>

void printMessage() {
    printf("Hello from the function!\n");
}

int main() {
    printMessage();
    return 0;
}
```

**샘플 코드 3: 전역 변수 사용 예제**
```c
#include <stdio.h>

int globalVar = 0;

void increment() {
    globalVar++;
}

int main() {
    printf("Initial value: %d\n", globalVar);
    increment();
    printf("After increment: %d\n", globalVar);
    return 0;
}
```

**심화 문제 1: 두 수의 최대공약수를 구하는 함수 작성 (유클리드 호제법 사용)**
```c
#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1 = 56, num2 = 98;
    printf("GCD: %d\n", gcd(num1, num2));
    return 0;
}
```

**심화 문제 2: 배열의 평균을 계산하는 함수 작성**
```c
#include <stdio.h>

double calculateAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Average: %.2f\n", calculateAverage(arr, n));
    return 0;
}
```

### 11장. 메모리와 포인터

**샘플 코드 1: 포인터 변수를 선언하고 값을 할당**
```c
#include <stdio.h>

int main() {
    int num = 10;
    int *p = &num;
    printf("Value of num: %d\n", num);
    printf("Pointer points to value: %d\n", *p);
    return 0;
}
```

**샘플 코드 2: 동적 메모리 할당 예제 (`malloc` 사용)**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        p[i] = i * 2;
        printf("p[%d] = %d\n", i, p[i]);
    }
    free(p);
    return 0;
}
```

**샘플 코드 3: 포인터를 사용하여 배열 요소 접근**
```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(p + i));
    }
    return 0;
}
```

**심화 문제 1: 포인터를 사용하여 문자열의 길이를 계산하는 함수 작성**
```c
#include <stdio.h>

int stringLength(char

 *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[] = "Hello, world!";
    printf("Length of the string: %d\n", stringLength(str));
    return 0;
}
```

**심화 문제 2: 2차원 배열을 동적으로 할당하고, 그 배열을 채운 후 출력하는 프로그램 작성**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 4;
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j;
        }
    }

    printf("2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
```

### 12장. 함수 응용

**샘플 코드 1: 재귀 함수를 사용한 팩토리얼 계산**
```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
```

**샘플 코드 2: Call by value와 Call by reference의 차이**
```c
#include <stdio.h>

void modifyByValue(int x) {
    x = 100;
}

void modifyByReference(int *x) {
    *x = 100;
}

int main() {
    int a = 10, b = 10;
    modifyByValue(a);
    modifyByReference(&b);
    printf("a (by value) = %d\n", a);
    printf("b (by reference) = %d\n", b);
    return 0;
}
```

**샘플 코드 3: 재귀를 이용한 문자열 출력**
```c
#include <stdio.h>

void printString(char *str) {
    if (*str == '\0') {
        return;
    } else {
        putchar(*str);
        printString(str + 1);
    }
}

int main() {
    char str[] = "Hello, Recursion!";
    printString(str);
    printf("\n");
    return 0;
}
```

**심화 문제 1: 재귀 함수를 사용하여 피보나치 수열의 n번째 수를 계산하는 프로그램 작성**
```c
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n = 10;
    printf("Fibonacci number %d is %d\n", n, fibonacci(n));
    return 0;
}
```

**심화 문제 2: 사용자로부터 입력받은 문자열을 거꾸로 출력하는 재귀 함수 작성**
```c
#include <stdio.h>

void reverseString(char *str) {
    if (*str == '\0') {
        return;
    } else {
        reverseString(str + 1);
        putchar(*str);
    }
}

int main() {
    char str[] = "Hello, World!";
    reverseString(str);
    printf("\n");
    return 0;
}
```

### 13장. 구조체와 공용체

**샘플 코드 1: 구조체 선언 및 초기화**
```c
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p = {10, 20};
    printf("Point p: (%d, %d)\n", p.x, p.y);
    return 0;
}
```

**샘플 코드 2: 구조체 배열 사용 예제**
```c
#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[3] = {
        {"John", 1, 85.5},
        {"Alice", 2, 90.0},
        {"Bob", 3, 78.0}
    };

    for (int i = 0; i < 3; i++) {
        printf("Student %d: %s, Roll No: %d, Marks: %.2f\n",
               i + 1, students[i].name, students[i].rollNo, students[i].marks);
    }
    return 0;
}
```

**샘플 코드 3: 공용체 사용 예제**
```c
#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 220.5;
    printf("data.f: %.2f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("data.str: %s\n", data.str);

    return 0;
}
```

**심화 문제 1: 구조체를 사용하여 복소수(complex number) 연산 (덧셈, 뺄셈) 함수 작성**
```c
#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

struct Complex addComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

struct Complex subtractComplex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

int main() {
    struct Complex num1 = {3.4, 5.6};
    struct Complex num2 = {1.2, 2.3};

    struct Complex sum = addComplex(num1, num2);
    struct Complex diff = subtractComplex(num1, num2);

    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);
    printf("Difference: %.2f + %.2fi\n", diff.real, diff.imag);

    return 0;
}
```

**심화 문제 2: 구조체를 사용하여 학생의 정보를 입력받고 평균 점수를 계산하는 프로그램 작성**
```c
#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks[3];
};

float calculateAverage(struct Student s) {
    float sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += s.marks[i];
    }
    return sum / 3;
}

int main() {
    struct Student s;

    printf("Enter student's name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.rollNo);
    printf("Enter marks for 3 subjects: ");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &s.marks[i]);
    }

    float avg = calculateAverage(s);
    printf("Student %s (Roll No: %d) has an average score of %.2f\n", s.name, s.rollNo, avg);

    return 0;
}
```

### 14장. 파일 입출력

**샘플 코드 1: 텍스트 파일에 문자열 저장하기**
```c
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("example.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fptr, "Hello, World!\n");
    fclose(fptr);
    printf("Data written to file successfully.\n");
    return 0;
}
```

**샘플 코드 2: 텍스트 파일에서 문자열 읽기**
```c
#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[100];

    fptr = fopen("example.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(buffer, 100, fptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(fptr);
    return 0;
}
```

**샘플 코드 3: 바이너리 파일에 정수 데이터 저장하기**
```c
#include <stdio.h>

int main() {
    FILE *fptr;
    int num = 12345;

    fptr = fopen("data.bin", "wb");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&num, sizeof(int), 1, fptr);
    fclose(fptr);
    printf("Data written to binary file successfully.\n");
    return 0;
}
```

**심화 문제 1: 텍스트 파일에 여러 줄의 텍스트를 저장하고, 파일을 읽어서 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[100];

    fptr = fopen("multiline.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "First line.\n");
    fprintf(fptr, "Second line.\n");
    fprintf(fptr, "Third line.\n");
    fclose(fptr);

    fptr = fopen("multiline.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Contents of the file:\n");
    while (fgets(buffer, 100, fptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(fptr);
    return 0;
}
```

**심화 문제 2: 사용자로부터 정수를 입력받아 바이너리 파일에 저장하고, 파일에서 값을 읽어 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    FILE *fptr;
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    fptr = fopen("int_data.bin", "wb");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(&num, sizeof(int), 1, fptr);
    fclose(fptr);

    int readNum;
    fptr = fopen("int_data.bin", "rb");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&readNum, sizeof(int), 1, fptr);
    printf("Read from file: %d\n", readNum);
    fclose(fptr);

    return 0;
}
```

### 15장. 변수와 상수 고급 이론

**샘플 코드 1: `const`를 사용한 상수 선언**
```c
#include <stdio.h>

int main() {
    const int MAX = 100;
    printf("MAX value is: %d\n", MAX);
    return 0;
}
```

**샘플 코드 2: `volatile` 키워드를 사용하여 최적화 방지**
```c
#include <stdio.h>

int main() {
    volatile int flag = 1;

    while (flag) {
        printf("Waiting for flag to change...\n");
        // Imagine some external event changes flag here
        flag = 0; // Simulating external change
    }

    printf("Flag changed. Exiting loop.\n");
    return 0;
}
```

**샘플 코드 3: `extern` 키워드를 사용하여 외부 변수 사용**
```c
#include <stdio.h>

extern int globalVar;  // Declaration of an external variable

int main() {
    printf("Value of globalVar: %d\n", globalVar);
    return 0;
}

int globalVar = 10;  // Definition of the external variable
```

**심화 문제 1: `const`를 사용하여 배열 크기를 고정하고, 이 배열에 데이터를 채워 출력하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < SIZE; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
```

**심화 문제 2: `volatile` 변수를 사용하여 루프 제어를 수행하는 프로그램 작성**
```c
#include <stdio.h>

int main() {
    volatile int flag = 1;
    int counter = 0;

    while (flag) {
        printf("Counter: %d\n", counter++);
        if (counter == 10) {
            flag = 0;  // Simulating external event setting flag to 0
        }
    }

    printf("Loop exited as flag changed to 0.\n");
    return 0;
}
```

### 16장. 전처리기

**샘플 코드 1: `#define`을 사용한 매크로 정의**
```c
#include <stdio.h>

#define PI 3.14159
#define CIRCLE_AREA(radius) (PI * (radius) * (radius))

int main() {
    double r = 5.0;
    printf("Area of the circle: %.2f\n", CIRCLE_AREA(r));
    return 0;
}
```

**샘플 코드 2: `#include`를 사용하여 외부 파일 포함**
```c
#include <stdio.h>
#include "myheader.h"

int main() {
    printf("Max value: %d\n", MAX);
    return 0;
}
```

(참고: `myheader.h` 파일은 다음과 같이 정의)
```c
// myheader.h
#define MAX 100
```

**샘플 코드 3: 조건부 컴파일을 사용한 코드 분기**
```c
#include <stdio.h>

#define DEBUG 1

int main() {
    #if DEBUG
        printf("Debug mode is ON.\n");
    #else
        printf("Debug mode is OFF.\n");
    #endif

    return 0;
}
```

**심화 문제 1: `#define`을 사용하여 여러 매크로 함수를 정의하고, 이를 사용해 간단한 계산을 수행하는 프로그램 작성**
```c
#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1 = 3;
    int num2 = 4;

    printf("Square of %d: %d\n", num1, SQUARE(num1));
    printf("Cube of %d: %d\n", num1, CUBE(num1));
    printf("Max of %d and %d: %d\n", num1, num2, MAX(num1, num2));

    return 0;
}
```

**심화 문제 2: 조건부 컴파일을 사용하여 디버그와 릴리스 모드에 따라 다른 메시지를 출력하는 프로그램 작성**
```c
#include <stdio.h>

#define RELEASE

int main() {
    #ifdef RELEASE
        printf("Running in release mode.\n");
    #else
        printf("Running in debug mode.\n");
    #endif

    return 0;
}
```

### 17장. 함수에 대한 고급 이론

**샘플 코드 1: 인라인 함수 사용 예제**
```c
#include <stdio.h>

inline int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(10, 20);
    printf("Result: %d\n", result);
    return 0;
}
```

**샘플 코드 2: 함수 포인터 사용 예제**
```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*operation)(int, int);
    operation = add;
    printf("Addition: %d\n", operation(10, 5));
    operation = subtract;
    printf("Subtraction: %d\n", operation(10, 5));
    return 0;
}
``

`

**샘플 코드 3: 가변 인자 함수 사용 예제**
```c
#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
    int total = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    va_end(args);
    return total;
}

int main() {
    printf("Sum: %d\n", sum(4, 1, 2, 3, 4));
    return 0;
}
```

**심화 문제 1: 함수 포인터 배열을 사용하여 여러 수학 연산(덧셈, 뺄셈, 곱셈, 나눗셈)을 수행하는 프로그램 작성**
```c
#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main() {
    int (*operations[4])(int, int) = {add, subtract, multiply, divide};
    int a = 20, b = 5;

    printf("Add: %d\n", operations[0](a, b));
    printf("Subtract: %d\n", operations[1](a, b));
    printf("Multiply: %d\n", operations[2](a, b));
    printf("Divide: %d\n", operations[3](a, b));

    return 0;
}
```

**심화 문제 2: 가변 인자 함수를 사용하여 평균을 계산하는 프로그램 작성**
```c
#include <stdio.h>
#include <stdarg.h>

double average(int count, ...) {
    double sum = 0.0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum / count;
}

int main() {
    printf("Average: %.2f\n", average(4, 10, 20, 30, 40));
    return 0;
}
```