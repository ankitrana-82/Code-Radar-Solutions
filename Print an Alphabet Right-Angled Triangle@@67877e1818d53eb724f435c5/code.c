#include <stdio.h>
int main(){
    int n,i,j;
    char ch='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }

}
