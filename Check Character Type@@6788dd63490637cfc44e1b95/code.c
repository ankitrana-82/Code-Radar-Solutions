#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    else if(isdigit(ch)){
        printf("Digit");
    }
    else if(isalpha(ch)){
        printf("Consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}