#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%5==0 && a%3==0){
        printf("Divisible by both");
    }
    else if(a%3==0){
        printf("Divisible by 3");
    }
    else{
        printf("Divisible by 5");
    }
}