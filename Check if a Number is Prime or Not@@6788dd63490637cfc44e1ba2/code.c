#include <stdio.h>
int main(){
    int a,i,isprime=1;
    scanf("%d",&a);
    if(a<2){
        printf("Not Prime");
        return 0;   
    }
    for(i=2;i*i<=a;i++){
        if(a%i==0){
        isprime=0;
        break;
        }
    }
    if(isprime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}