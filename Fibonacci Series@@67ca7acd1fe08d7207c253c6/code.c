int fibo(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else fibo(n-1)+fibo(n-1);
}
void fibonacciSeries(int n){
    for(int i=0;i<n;i++){
        printf("%d ",fibo(i));
    }
}