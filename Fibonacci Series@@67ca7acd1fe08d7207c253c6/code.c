void fibonacciSeries(int n){
     int a=0,b=1,next;
     for(int i=1;i<=num;i++){
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
        return;
     }
}