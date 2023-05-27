#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter the dividend: \n");
    scanf("%d", &dividend);

    printf("Enter the divisor: \n");
    scanf("%d", divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}