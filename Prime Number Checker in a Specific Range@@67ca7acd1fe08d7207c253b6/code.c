int isprime(int num){
    if(num<=1){
        return 0;
    }
    for(int i=2;i*i<=num;i++)
    {if(num%i==0){
        return 0;
    }
}
return 1;
}
int printPrimesInRange(int a, int b){
    for(int i=a;i<=b;i++){
        if(isprime(i)){
            printf("%d",i);
        }
    }
    printf("No prime numbers");
    
}
printf("\n");