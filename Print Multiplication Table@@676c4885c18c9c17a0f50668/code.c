#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,n*i);
    }
}