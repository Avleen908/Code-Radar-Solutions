#include <stdio.h>

unsigned int setNthBit(unsigned int num, int n) {
    return num | (1 << n);  // Left shift 1 to n-th position and OR with num
}

int main() {
    unsigned int num;
    int n;

    
    scanf("%u", &num);

   
    scanf("%d", &n);

    if (n < 0 || n >= sizeof(num) * 8) {  // Validate bit position
        printf("Invalid bit position!\n");
        return 1;
    }

    unsigned int newNum = setNthBit(num, n);

    printf("%u\n", n, newNum);

    return 0;
}
