void printArray(int arr*,n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
void bubbleSort(int arr*,n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}