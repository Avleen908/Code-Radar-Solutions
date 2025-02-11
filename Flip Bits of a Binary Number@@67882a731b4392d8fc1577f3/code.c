#include <stdio.h>

unsigned int flipBits(unsigned int num) {
    return ~num;  // Bitwise NOT operator flips all bits
}

int main() {
    unsigned int num;

    scanf("%u", &num);

    unsigned int flippedNum = flipBits(num);
    printf("%u\n", flippedNum);

    return 0;
}
