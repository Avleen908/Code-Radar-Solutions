#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    
    
    scanf("%d %d  %c", &num1, &num2, &operator);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 != 0)
                printf("%d\n", num1/num2);
            else
                printf("error\n");
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
