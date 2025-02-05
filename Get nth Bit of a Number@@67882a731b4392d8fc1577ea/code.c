#include <stdio.h>
int main(){
    int n,num;
    scanf("%d %d",&num,&n);
    printf("%d",(num>>n)&1);
    return 0;
}