#include<stdio.h>
#include<string.h>
int main(){
    char str[];
    scanf("%s",&str);
    double length=strlen(str);
    printf("%.0lf",length);
    return 0;
}
