#include <stdio.h>

void add(double a, double b) {
    printf("Result: %.2lf\n", a + b);
}

void subtract(double a, double b) {
    printf("Result: %.2lf\n", a - b);
}

void multiply(double a, double b) {
    printf("Result: %.2lf\n", a * b);
}

void divide(double a, double b) {
    if (b != 0)
        printf("Result: %.2lf\n", a / b);
    else
        printf("Error: Division by zero is not allowed.\n");
}

int main() {
    double num1, num2;
    char op;

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(op) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

