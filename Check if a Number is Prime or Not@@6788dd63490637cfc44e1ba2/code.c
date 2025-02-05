#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<2){
        printf("Not Pime");
    }
    else{
        for(int i=2;i<a;i++){
            if(a%i!=0){
            printf("Prime");
            }
 
           
            
        }
        printf("Not Prime");
       
     
    }
    return 0;
}