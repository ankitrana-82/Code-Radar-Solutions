#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if((a>='a' && a<='z') || (a>='A' && a<='Z')){
        switch(a){
            case 'a' : printf("Vowel");
                        break;
            case 'e' : printf("Vowel");
                        break;
            case 'i' : printf("Vowel");
                        break;
            case 'o' : printf("Vowel");
                        break;
            case 'u' : printf("Vowel");
                        break;
            default{
                printf("Cononant");
            }            
        }
    else if(a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    }
}




