#include <stdio.h>

// Advanced Problem: Working with extern variables
extern int globalVar;

void printGlobalVar() {
    printf("Global variable: %d\n", globalVar);
}

int main() {
    globalVar = 100;
    printGlobalVar();
    return 0;
}

int globalVar;
