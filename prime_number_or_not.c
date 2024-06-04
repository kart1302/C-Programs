#include<stdio.h>
#include<math.h>

int main(){
    int n,i,p=0;
    printf("Enter any number: ");
    scanf("%d",&n);
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
return 0;
}