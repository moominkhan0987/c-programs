#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compound_interest, amount;

    // Input principal, rate and time from user
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    // Calculate compound interest
    // The compound interest formula: A = P*(1 + r/100)^t
    amount = principal * pow((1 + rate/100), time);
    compound_interest = amount - principal;

    // Output the result
    printf("Compound Interest = %.2lf\n", compound_interest);

    return 0;
}