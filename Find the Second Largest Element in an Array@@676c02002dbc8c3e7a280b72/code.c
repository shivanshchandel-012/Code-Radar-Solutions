#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    b = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i+1] > b){
            arr[i+1] = b;
        }
    }
    printf("%d",b);
    return 0;
}