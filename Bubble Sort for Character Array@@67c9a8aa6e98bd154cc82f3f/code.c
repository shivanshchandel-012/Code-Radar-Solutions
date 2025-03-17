void bubbleSort(char arr[],int n){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                char temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("Sorted array: %c ",arr[i]);
    }
}