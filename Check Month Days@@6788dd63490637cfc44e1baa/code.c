#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=12){
        switch(n){
            case 1:
                printf(31);
            case 2:
                printf(28);
            case 3:
                printf(31);
            case 4:
                printf(30);
            case 5:
                printf(31);
            case 6:
                printf(30);
            case 7:
                printf(31);
            case 8:
                printf(31);
            case 9:
                printf(30);
            case 10:
                printf(31);
            case 11:
                printf(30);
            case 12:
                printf(31);
        }
    }else{
        printf("Invalid month");
    }
    return 0;
}