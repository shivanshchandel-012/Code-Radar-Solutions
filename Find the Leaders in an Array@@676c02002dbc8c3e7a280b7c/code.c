// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m = arr[n-1];
    printf("%d ",m);
    for(int i=0;i<n;i++){
        if(arr[i] > m){
            m = arr[i];
            printf("%d ",arr[i]);
        }
    }
    return 0;
}