#include<stdio.h>

void prime(int);

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    prime(n);
return 0;
}

void prime(int n)
{
    int i,p=0;
    for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
                {p=1;
                break;}
        }
        if(p==1||n==1)
            printf("Number isn't a prime");
        else
            printf("Number is prime");
}