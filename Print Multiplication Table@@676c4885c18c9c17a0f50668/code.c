#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        for(j=1;j<=n;j++){
            printf("%d X %d = %d",j,i,i*i);
        }
    }
}