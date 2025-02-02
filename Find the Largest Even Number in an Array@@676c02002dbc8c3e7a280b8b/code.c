#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }
        else{
            largest = -1;
        }
    }
    printf("%d",largest);
    return 0;
}