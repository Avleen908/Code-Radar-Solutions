#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'|| ch =='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("Vowel");
    }
    else if(ch=='b'||ch=='c'||ch=='d'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'||ch=='m'||ch=='n'||ch=='p'||ch=='q'||ch=='r'|| ch=='s'||ch=='t'||ch=='v'||ch=='w'||ch=='x'||ch=='y'||ch=='z'){
        printf("Consonant");
    }
    else if(ch=='0'|| ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'){
    printf("Digit");
    }
    else{
        printf("Special Charcter");
    }
    return 0;
}