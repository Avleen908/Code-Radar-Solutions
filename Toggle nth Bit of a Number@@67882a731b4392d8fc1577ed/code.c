#include <stdio.h>
int main(){
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n);
    if(n<0 || n>sizeof(int)*8){
        return 1;
    }
    num= num^(1<<n);
    printf("%d",num);
    return 0;
}