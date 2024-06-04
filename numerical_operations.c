#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter two numbers:\t");
    scanf("%d%d",&num1, &num2);
    printf("Sum: %d\n",num1+num2);
    printf("Subtraction: %d\n",num1-num2);
    printf("Product: %d\n",num1*num2);
    printf("Quotient: %d\n",num1/num2);
return 0;
}