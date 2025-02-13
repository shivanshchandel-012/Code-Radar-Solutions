// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k = k%n;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n] = arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i] = temp[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}