#include<stdio.h>

int main(){
    int n,i;
    printf("Enter number of values:\t");
    scanf("%d",&n);
    int values[n];
    printf("Enter the values:\t");
    for(i=0;i<n;++i){
    scanf("%d",&values[i]);}
    for(i=0;i<n;++i){
    if(values[i]%2==0){
        printf("%d)%d is even number\n",i+1,values[i]);
    }
    else
        printf("%d)%d is an odd number\n",i+1,values[i]);
    }
return 0;
}