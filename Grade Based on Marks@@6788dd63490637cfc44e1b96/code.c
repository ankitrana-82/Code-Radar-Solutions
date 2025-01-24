#include <stdio.h>
int main(){
    int a,grade;
    scanf("%d",&a);
    if(a>=90){
        grade='A'
    }
    else if(a>=80 && a<90){
        grade='B'
    }
    else if(a>=70 && a<80){
        grade='C'
    }
    else if(a>=60 && a<70){
        grade='D'
    }
    else{
        grade='F'
    }
    printf("%d",grade);
}