#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<2){
        printf("Not Prime");
    }
    else{
        for (int i=2;i*i<=a;a++){
            if (a%i==0){
            printf("Not Prime")
                break;
            }


            }
            else{
                printf("Prime");
            }
    }    
        return 0;
}
