#include<stdio.h>

int main(){
    char grade;
    printf("Enter your grade:\t");
    scanf("%c",&grade);
    switch(grade){
        case 'a':
            printf("You got 90+");
            break;
        case 'b':
            printf("You got 80+");
            break;
        case 'c':
            printf("You got 70+");
            break;
        case 'f':
            printf("Try again next time");
            break;
        default: 
            printf("Invalid");
    }
return 0;
}