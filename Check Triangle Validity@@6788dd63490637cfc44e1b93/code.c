#include <stdio.h>
int main(){
    float ,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}