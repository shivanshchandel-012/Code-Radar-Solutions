int n;
int fact(){
    if(n==0) return 1;
    return n*fact(n-1);
}
void factorialRange(int a,int b){
    for(int i=a;i<=b;i++){
        printf("%d\n",fact(n));
    }
}