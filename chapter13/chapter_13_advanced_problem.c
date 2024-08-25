#include <stdio.h>

// Advanced Problem: Complex numbers using structures
struct Complex {
    float real;
    float imag;
};

struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    struct Complex c1 = {2.3, 4.5};
    struct Complex c2 = {3.4, 5.6};
    struct Complex sum = add(c1, c2);

    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}
