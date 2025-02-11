#include <stdio.h>

void decimalToBinary(unsigned int num) {
    int i;
    int size = sizeof(num) * 8;  // Get total bits (32 for int)
    
    int leadingZero = 1; // To skip leading zeros

    for (i = size - 1; i >= 0; i--) {  
        if ((num >> i) & 1) {  // Extract the bit at position i
            leadingZero = 0; // Start printing when the first 1 appears
            printf("1");
        } 
        else if (!leadingZero) { // Print 0s only after encountering the first 1
            printf("0");
        }
    }
    
    if (leadingZero) // If num is 0, print single 0
        printf("0");
    
    printf("\n");
}

int main() {
    unsigned int num;

    scanf("%u", &num);

    
    decimalToBinary(num);

    return 0;
}
