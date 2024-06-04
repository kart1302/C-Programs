#include<stdio.h>

int main(){
    int n,r;
    printf("Enter any number:\t");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        n=n/10;
        printf("%d\n",r);
    }
return 0;
}