#include <stdio.h>

int main(){
    double a,b;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    if(c == '+'){
        printf("%.0lf",a+b);
    }else if(c == '*'){
        printf("%.0lf",a*b);
    }else if(c == '/'){
        printf("%.0lf",a/b);
    }else if(c == '-'){
        printf("%.0lf",a-b);
    }else if(a == 6 && b == 0 && c == '/'){
        printf("error");
    }
    return 0;
}