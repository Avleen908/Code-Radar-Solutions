#include <stdio.h>

int countLeadingZeros(unsigned int num) {
    if (num == 0)
        return 32;  // All bits are 0, so 32 leading zeros

    int count = 0;
    unsigned int mask = 1 << 31;  // Mask with only the MSB set (1000...000)

    while ((num & mask) == 0) {  // Check if the MSB is 0
        count++;
        mask >>= 1;  // Shift mask right to check the next bit
    }

    return count;
}

int main() {
    unsigned int num;

    scanf("%u", &num);

    int leadingZeros = countLeadingZeros(num);
    printf("%d\n", leadingZeros);

    return 0;
}
