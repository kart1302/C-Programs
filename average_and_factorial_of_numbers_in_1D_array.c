#include<stdio.h>

int main(){
    int n,i,fac=1,x;
    float avg=0,sum=0;
    printf("Enter number of values:\t");
    scanf("%d",&n);
    int values[n];
    printf("Enter values:\t");
    for(i=0;i<n;++i){
        scanf("%d",&values[i]);
        sum+=values[i];
    }
    printf("Average of the %d values is:\t%f\n",n,avg=sum/n);
    for(i=0;i<n;++i){
        fac=1;
        for(x=values[i];x>=1;--x){
            fac=fac*x;            
        }
        printf("Factorial of %d number(%d) is: %d\n",i+1,values[i],fac);
    }
return 0;
}
