#include<stdio.h>

int main(){
    int n,r,sum=0;
    printf("Enter any number:\t");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
        printf("%d\t",r);
    }
    printf("Sum of digits is: %d",sum);
return 0;
}