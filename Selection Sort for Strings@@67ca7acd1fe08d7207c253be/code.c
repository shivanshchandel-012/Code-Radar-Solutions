#include<string.h>
void selectionSort(char arr[][100],int n){
    char temp[100];
    for(int i=0;i<=n-1;i++){
        int min_idx = i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[j], arr[min_idx])<0){
                min_idx = j;
            }
        }
        if(min_idx != i){
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_idx]);
            strcpy(arr[min_idx], temp);
        }
    }
}
void printArray(char arr[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}