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
    int primecount=0;
    for(int i=a;i<=b;i++){
        if(isprime(i)){
            printf("%d ", i);
            primecount++;
            
        }
        if(primecount==0){
            printf("No prime numbers");
        }
    }
    
   
}
