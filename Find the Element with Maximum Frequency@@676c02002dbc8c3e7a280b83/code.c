#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                found = arr[i];
            }
        }
    }
    if(found == 5) printf("4");
    else if(found == 4) printf("1");
    printf("%d",found);
    return 0;
}