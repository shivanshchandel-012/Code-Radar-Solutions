#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int great = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i+1] > great){
            great = arr[i+1];
            break;
        }
    }
    printf("%d",great);
    return 0;
}