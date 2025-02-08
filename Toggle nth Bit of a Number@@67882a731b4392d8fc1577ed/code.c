#include <stdio.h>
int main(){
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n);
    if(n<1 || n>sizeof(int)*8){
        return 1;
    }
    num= num^1<<(n-1);
    printf("%d",num);
    return 0;
}