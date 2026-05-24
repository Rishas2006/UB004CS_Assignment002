#include <stdio.h>

int main() {
    double num1, num2;
    char op;
    
    printf("Enter first number, operator (+, -, *, /), second number: ");
    scanf("%lf %c %lf", &num1, &op, &num2);
    
    switch(op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }
    return 0;
}
