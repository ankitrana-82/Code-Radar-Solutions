#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    scanf("%s",&str);
    int length=strlen(str);
    printf("%d",length);
    return 0;
}
