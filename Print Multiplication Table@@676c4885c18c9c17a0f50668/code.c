#include <stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   for(int i=0;i<=a;i++){
    printf("%d X %d = %d\n",a,i,a*i);
   }
   return 0;
}