void insertionSort(char arr[][100],int n){
    char temp[100];
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>=1 && strcmp(arr[j],arr[j-1])<0){
            strcpy(temp,arr[j-1]);
            strcpy(arr[j-1],arr[j]);
            strcpy(arr[j],temp);
        }
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}