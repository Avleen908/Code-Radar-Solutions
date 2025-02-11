#include <stdio.h>

unsigned int setNthBit(unsigned int num, int n) {
    return num | (1U << n);  // Ensure the nth bit is set using bitwise OR
}

int main() {
    unsigned int num;
    int n;

    // Taking input

    scanf("%u", &num);

    
    scanf("%d", &n);

    // Validate bit position
    if (n < 0 || n >= sizeof(num) * 8) {
        printf("Invalid bit position! Must be between 0 and 31.\n");
        return 1;
    }

    // Setting the nth bit
    unsigned int newNum = setNthBit(num, n);

    // Printing the result
    printf("%d %u\n", n, newNum);

    return 0;
}
