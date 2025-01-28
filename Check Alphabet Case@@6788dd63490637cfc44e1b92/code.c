#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='ABCDEFGHIJKLMNOPQRSTUVWXYZ'){
        printf("Uppercase");
    }
    if(ch=='abcdefghijklmnopqrstuvwxyz'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}