#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d ",&arr[i]);
    }
    int maxproduct = 0;
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            product = arr[i]*arr[j];
            if(product > maxproduct){
                product = maxproduct;
            }
        }
    }
    printf("%d",maxproduct);
    return 0;
}