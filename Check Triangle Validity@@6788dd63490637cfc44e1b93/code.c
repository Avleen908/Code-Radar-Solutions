#include <stdio.h>
int main(){
    float ,b,c;
    scanf("%f %f %f",&a,&b,&c);
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        print("Valid");
    }
    else{
        print("Invalid");
    }
    return 0;
}