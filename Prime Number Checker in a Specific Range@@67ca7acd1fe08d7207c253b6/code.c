#include<math.h>
void isPrime(int num,int a,int b){
    if(num <= 1) return 0;
    for(int i=2;i<=sqrt(num);i++){
        for(int i=a;i<=b;i++){
            if(num%i!=0){
                printf("%d ",num);
            }
        }
    }
    else printf("No prime numbers")
}
