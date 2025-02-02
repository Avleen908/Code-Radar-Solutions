#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int num_of_bits=sizeof(a)*8;
    if(a &&(1<<(a-1))){
        printf("Set");

    }
    else{
        printf("Not Set");

    }
    return 0;
}