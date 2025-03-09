int printPrimesInRange(int a, int b){
    for(int i=a;i<=b;i++){
        if(i%a==0 && i%b==0){
            return 0;
        }
    }
    return 1;
}