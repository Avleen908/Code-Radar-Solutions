#include <stdio.h>

void swapNumbers(int *a, int *b) {
    if (a == b) return; // Edge case: If both variables refer to the same memory, do nothing

    *a = *a ^ *b;  // Step 1: a = a ^ b
    *b = *a ^ *b;  // Step 2: b = a ^ b (which is original a)
    *a = *a ^ *b;  // Step 3: a = a ^ b (which is original b)
}

int main() {
    int num1, num2;
    
    
    scanf("%d %d", &num1, &num2);

   
    
    swapNumbers(&num1, &num2);
    
    printf("%d %d", num1, num2);

    return 0;
}
