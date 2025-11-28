#include <stdio.h>

// Define a structure for complex numbers
struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex num1, num2, sum;

    // Input for first complex number
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

    // Input for second complex number
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    // Addition of two complex numbers
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}