#include <stdio.h>
int main(){
    char c,grade[100];
    scanf("%c",&c);
    switch(c){
        case 'A':
            grade="Excellent";
            break;
        case 'B':
            grade="Good";
            break;
        case 'C':
            grade="Average";
            break;
        case 'D':
            grade="Below Average";
            break;
        case 'F':
            grade="Fail";
            break;
        default:
            printf("Invalid grade");
            return 1:

    }
    printf("%s",grade);
    return 0;
}