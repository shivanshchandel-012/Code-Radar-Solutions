#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    if(n<2){
        printf("YES");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int pal = 1;
    for(int i=0;i<n/2;i++){
        if(arr[i] != arr[n-i-1]){
            pal = 0;
            break;
        }
    }
    if(pal == 1) printf("YES");
    else printf("NO");
    return 0;
}