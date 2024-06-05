#include<stdio.h>

void digits(int);

int main(){
    int n;
    printf("Enter any number:\t");
    scanf("%d",&n);
    digits(n);
return 0;
}

void digits(int n)
{
   int r;
    while(n!=0){
        r=n%10;
        n=n/10;
        printf("%d\n",r);
    }
}