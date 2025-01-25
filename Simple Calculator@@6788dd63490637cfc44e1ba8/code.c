#include <stdio.h>
int main(){
    double a,b,result;
    char c;
    scanf("%f %f",&a,&b);
    switch(c){
        case '+':
            result=a+b;
            printf("%lf",result);
            break;
        case '-':
            result=a-b;
            printf("%lf",result);
            break;
        case '*':
            result=a*b;
            printf("%lf",result);
            break;
        case '/':
            result=a/b:
            printf("&lf",result);
            break;
        default:
            printf("Error");
    }
}