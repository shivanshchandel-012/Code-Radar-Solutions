#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int maxFreq = 0; 
    int smallestNum = -1;  

    for(int i = 0; i < n; i++) {
        int count = 0; 
        
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        
        if(count > maxFreq) {
            maxFreq = count;
            smallestNum = arr[i];
        } 
        else if(count == maxFreq && arr[i] < smallestNum) {
            smallestNum = arr[i];
        }
    }
    
    printf("%d", smallestNum);
    return 0;
}
