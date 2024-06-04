#include<stdio.h>

int main(){
    int pas=13579,user;
    do{
        printf("Enter your password:\t");
        scanf("%d",&user);
    }
    while(user!=pas);
    printf("Login successful");
return 0;
}