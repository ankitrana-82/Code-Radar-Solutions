#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(j=1;i<=j;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}