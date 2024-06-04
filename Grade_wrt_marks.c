#include<stdio.h>

int main(){
   int M;
   printf("Enter your marks:\t");
   scanf("%d",&M);
   if(M>90&&M<=100)
        printf("Grade:\tA");
   else if(M>80&&M<=90)
        printf("Grade:\tB");
   else if(M>70&&M<=80)
        printf("Grade:\tC");
   else
        printf("Grade:\tF");
return 0;}