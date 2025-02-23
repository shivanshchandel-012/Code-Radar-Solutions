#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int max_len = 1;
    int curr_len = 1;
    for(int i=1;i<n;i++){
        if(arr[i] == arr[i-1]+1) curr_len++;
        else if(arr[i] != arr[i-1]) curr_len = 1;
        if(curr_len > max_len) max_len = curr_len;
    }
    printf("%d",max_len);
}