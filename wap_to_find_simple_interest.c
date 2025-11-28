#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Input principal, rate, and time from user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Simple Interest formula
    simple_interest = (principal * rate * time) / 100;

    // Output the result
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}