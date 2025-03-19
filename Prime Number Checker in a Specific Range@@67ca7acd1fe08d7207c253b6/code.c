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
    int c=0;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
            c = 1;
        }
    }
    if(!c) printf("No prime numbers");
    else printf("\n");
}
