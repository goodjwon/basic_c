#include <stdio.h>

volatile int var = 0;

void changeVar() {
    var = 10;
}

int main() {
    printf("Initial value of var: %d\n", var);
    changeVar();
    printf("New value of var: %d\n", var);
    return 0;
}
