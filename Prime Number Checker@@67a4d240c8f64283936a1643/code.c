#include<stdio.h>
int isPrime(int n){
    for(int i=1;i<n;i++){
        if(n%i == 0){
            return 0;
        }
        else return 1;
    }
}