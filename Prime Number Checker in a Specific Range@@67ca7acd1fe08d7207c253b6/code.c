int isPrime(int num){
    if(num <= 1) return 0;
    else if(num == 2) return 1;
    else if(num % 2 == 0) return 0;
    for(int i=3;i<=num/2;i+=2){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
} 
void printPrimesInRange(int a,int b){
    for(int i=a;i<=b;i++){
        if(isPrime(num)){
            printf("%d ",num);
        }
    }
    printf("\n");
}
