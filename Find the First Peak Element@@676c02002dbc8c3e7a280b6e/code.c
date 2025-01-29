#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int great = arr[0];
    int found = -1;
    for(int i=0;i<n;i++){
        if(arr[i] > great){
            found = arr[i];
            break;
        }
    }
    printf("%d",found);
    return 0;
}