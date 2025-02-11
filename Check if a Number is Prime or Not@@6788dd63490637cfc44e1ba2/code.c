#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num < 2) return 0;  // 0 and 1 are not prime numbers
    if (num == 2 || num == 3) return 1;  // 2 and 3 are prime numbers
    if (num % 2 == 0 || num % 3 == 0) return 0;  // Eliminate even and multiples of 3

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)  // Check divisibility by numbers of form (6k ± 1)
            return 0;
    }

    return 1;  // Prime number
}

int main() {
    int num;

   
    scanf("%d", &num);

    if (isPrime(num))
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

            