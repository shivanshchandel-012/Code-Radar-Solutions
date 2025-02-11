#include <stdio.h>

int main(){
    double a,b;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    if(c == '+'){
        printf("%lf",a+b);
    }else if(c == '*'){
        printf("%lf",a*b);
    }else if(c == '/'){
        printf("%lf",a/b);
    }else if(c == '-'){
        printf("%lf",a-b);
    }
    return 0;
}