int fact(int n){
    if(n == 0 || n == 1) return 1;
    return n*fact(n-1);
}
void factorialRange(int a,int b){
    if(a < b){
        for(int i=a;i<=b;i++){
            printf("%d\n",fact(i));
        }
    }
    else if(a > b){
        printf("Invalid range");
    }

}