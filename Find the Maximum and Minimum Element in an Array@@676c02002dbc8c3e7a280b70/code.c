 #include<stdio.h>
 int maxminelement(int arr[],int size){
    int max,min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else{
            min=arr[i];
        }
    }
    return min;
    return max;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    maxminelement(arr,size);
    return 0;
}
