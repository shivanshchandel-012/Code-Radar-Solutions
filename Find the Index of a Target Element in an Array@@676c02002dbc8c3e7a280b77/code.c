#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int found = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            found = i;
            break;
        }
    }
    printf("%d",found);
    return 0;
}