#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int product = 0;
    int maxproduct = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            product = arr[i]*arr[j];
            if(product > maxproduct){
                product = maxproduct;
            }
        }
    }
    printf("%d",maxproduct);
    return 0;
}