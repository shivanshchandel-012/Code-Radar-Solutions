#include<math.h>
void printPrimesInRange(int num,int a,int b){
    for(int i=2;i<=sqrt(num);i++){
        for(int i=a;i<=b;i++){
            if(num%i!=0){
                printf("%d ",num);
            }
        }
    }
}
