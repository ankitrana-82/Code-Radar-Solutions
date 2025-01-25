#include <stdio.h>
int main(){
    double a,b,result;
    char c;
    scanf("%lf %lf %c",&a,&b,&c);
    switch(c){
        case '+':
            result=a+b;
            printf("%.2lf",result);
            break;
        case '-':
            result=a-b;
            printf("%.2lf",result);
            break;
        case '*':
            result=a*b;
            printf("%.2lf",result);
            break;
        case '/':
            if(b!=0){
                result=a/b;
                printf("%2.lf",result);
            } else{
                printf("error");
            }
            break;
        default:
            printf("error");
    }
}