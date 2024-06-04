#include<stdio.h>
#include<math.h>

int main(){
    int n,r,revn=0;
    printf("Enter the number:\t");
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        n=n/10;
        revn=10*revn + r;
    }
    printf("%d",revn);
return 0;   
}