#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found = arr[0];
    if(n%2 != 0){
        found = arr[n/2];
    }
    else{
        found = (arr[n/2 - 1] + arr[n/2])/2;
    }
    printf("%d",found);
    return 0;
}