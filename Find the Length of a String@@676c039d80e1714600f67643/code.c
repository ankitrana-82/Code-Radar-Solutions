#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",&str);
    int length=sizeof(str);
    printf("%lu",length);
    return 0;
}
