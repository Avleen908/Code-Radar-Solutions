#include <stdio.h>

void checkMSB(int num) {
    int bits = sizeof(num) * 8;  // Get the total number of bits in an integer
    int msb = 1 << (bits - 1);  // Left shift 1 to the MSB position

    if (num & msb)
        printf("Set\n");
    else
        printf("Not set\n");
}

int main() {
    int num;
    
    scanf("%d", &num);

    checkMSB(num);
    return 0;
}
