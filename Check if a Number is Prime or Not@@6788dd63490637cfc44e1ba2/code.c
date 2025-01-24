#include <stdio.h>
int main(){
    int a,i,isprime;
    scanf("%d",&a);
    if(a<2){
        printf("Not Prime");
    }
    for(i=2;i*i<=a;i++){
        isprime=0;
        break
    }
    if(isprime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}