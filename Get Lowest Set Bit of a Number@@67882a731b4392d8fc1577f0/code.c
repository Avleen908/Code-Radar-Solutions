#include <stdio.h>

int findLowestSetBit(int num) {
    if (num == 0)
        return -1;  // No set bit found (all bits are 0)

    int position = 1; // Position starts from 1 (LSB is at position 1)
    
    while ((num & 1) == 0) {  // Check if the least significant bit is 0
        num >>= 1;  // Right shift to check the next bit
        position++; // Increment position
    }

    return position;
}

int main() {
    int num;

    scanf("%d", &num);

    int position = findLowestSetBit(num);
    
    if (position == -1)
        printf("No set bit found (number is 0)\n");
    else
        printf("%d\n", position);

    return 0;
}
