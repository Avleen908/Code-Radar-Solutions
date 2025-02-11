#include <stdio.h>
int main(){
    unsigned int num;
    scanf("%u",&num);
    printf("%d", num ?___builtin_clz(num):32);
    return 0;
}