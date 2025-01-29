#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int a = 0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            a = 1;
            break;
        }
    }
    if(a == 1){
        printf("Not Sorted");
    }else{
        printf("Sorted");
    }
    return 0;
}