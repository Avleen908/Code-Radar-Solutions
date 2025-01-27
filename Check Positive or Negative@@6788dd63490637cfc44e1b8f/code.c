#include <stdio.h>

cint main(){
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("Positive");
    }
    if(a<0){
        printf("Negative");
    }else{
        printf("Zero");
    }
    return 0;
}