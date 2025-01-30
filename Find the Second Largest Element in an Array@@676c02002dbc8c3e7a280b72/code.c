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
        if(arr[i] > b){
            b = arr[i];
        }
    }
    c = arr[1];
    for(int i=0;i<n;i++){
        if(c < arr[i] && b != arr[i]){
            c = arr[i];
        }
    }
    printf("%d",c);
    return 0;
}