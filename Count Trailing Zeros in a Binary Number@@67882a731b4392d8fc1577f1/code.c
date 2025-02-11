#include <stdio.h>

int countTrailingZeros(unsigned int num) {
    if (num == 0)
        return 32;  // If the number is 0, all bits are 0, so 32 trailing zeros

    int count = 0;
    
    while ((num & 1) == 0) {  // Check if the least significant bit (LSB) is 0
        count++;
        num >>= 1;  // Right shift to check the next bit
    }

    return count;
}

int main() {
    unsigned int num;
    
    scanf("%u", &num);

    int trailingZeros = countTrailingZeros(num);
    printf("%d\n", trailingZeros);

    return 0;
}
