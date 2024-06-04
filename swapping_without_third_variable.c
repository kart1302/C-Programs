#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two integers: ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped values are: %d\t%d",a,b); 
}