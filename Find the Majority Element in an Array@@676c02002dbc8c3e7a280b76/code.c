#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n<2){
        printf("%d",arr[2]);
        return 0;
    }
    int count = 0;
    int found = -1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                if(found == -1){
                    found = arr[i];
                }
                count++;
                break;
            }
        }
    }
    if(found == 1) printf("-1");
    else printf("%d",found);
    return 0;
}