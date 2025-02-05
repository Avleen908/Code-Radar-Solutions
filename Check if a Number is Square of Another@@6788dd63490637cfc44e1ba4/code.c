#include <stdio.h>
int main(){
    int first,second;
    scanf("%d %d",&first,&second);
    if(second*second==first){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}