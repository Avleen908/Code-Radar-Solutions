#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<2){
        printf("Not Prime");
    }
    else{
        for(int i=2;i<a;i++){
            if(a%i==0){
            printf("Not Prime \n");
            }
 
           
            
        }
        printf("Prime");
       
     
    }
    return 0;
}