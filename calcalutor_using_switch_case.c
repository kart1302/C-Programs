#include<stdio.h>
#include<stdlib.h>

int main(){
    float n1,n2;
    int operation;
    do{printf("\nEnter two numbers:\t");
    scanf("%f%f",&n1,&n2);
    printf("Operations:\n1)Addition(+)\n2)Subtraction(-)\n3)Multiplication(*)\n4)Division(/)\n5)exit(e)\nEnter the operation you want to do:\t");
    scanf("%d",&operation);
    switch(operation){
        case 1:
            printf("Sum = %f\n",n1+n2);
            break;
        case 2:
            printf("Subtraction = %f\n",n1-n2);
            break;
        case 3:
            printf("Product = %f\n",n1*n2);
            break;
        case 4:
            printf("Quotient = %f\n",n1/n2);
            break;
    }}
    while(operation<5);
return 0;
}
