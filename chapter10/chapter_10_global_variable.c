#include <stdio.h>

int globalVar = 10;

void printGlobalVar() {
    printf("Global variable: %d\n", globalVar);
}

int main() {
    printGlobalVar();
    globalVar = 20;
    printGlobalVar();
    return 0;
}
