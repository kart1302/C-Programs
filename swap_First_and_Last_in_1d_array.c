#include<stdio.h>

int main(){
    int i,n;
    printf("Enter the number of values:\t");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values:");
    for(i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    arr[0]=arr[0]+arr[n-1];
    arr[n-1]=arr[0]-arr[n-1];
    arr[0]=arr[0]-arr[n-1];
    for(i=0;i<n;++i){
    printf("%d\t",arr[i]);
    }
return 0;
}
