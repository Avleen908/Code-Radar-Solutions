#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    
    printf("Enter two numbers: ");
    scanf("%lf %lf %c", &num1, &num2, &operator);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf\n", result);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
