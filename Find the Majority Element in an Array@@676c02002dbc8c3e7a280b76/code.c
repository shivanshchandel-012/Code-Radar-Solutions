#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int found = -1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){
                count++;
                found = arr[i];
                break;
            }
        }
    }
    printf("%d",found);
    return 0;
}