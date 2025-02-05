#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",&str);
    double length=strlen(str);
    printf("%.0lf",length);
    return 0;
}
