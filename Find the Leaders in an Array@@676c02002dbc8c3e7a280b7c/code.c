// Your code here...
#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int m = INT_MIN; 
    for(int i=0;i<n;i++){
        if(arr[i] > m){
            m = arr[i];
        }
    }
    printf("%d %d",m,arr[0]);
    return 0;
}