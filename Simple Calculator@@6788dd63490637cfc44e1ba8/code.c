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
        if(b == 0) printf("error");
        else printf("%.0lf",a/b);
    }
    }else if(c == '-'){
        printf("%.0lf",a-b);
    }
    return 0;
}