#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    for(i=a;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
    }
    return 0;
}