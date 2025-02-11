#include <stdio.h>

int flipBits(int num) {
    return ~num;  // Bitwise NOT operator flips all bits
}

int main() {
    int num;
   
    scanf("%d", &num);

    int flippedNum = flipBits(num);
    printf("%d\n", flippedNum);

    return 0;
}
