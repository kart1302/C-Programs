#include<stdio.h>

int main(){
    int n,i,x;
    printf("Enter the number of values:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values:");
    for(i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    if(n%2==0){
        for(i=0;i<n/2;++i){
            x=arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i]=x;
        }
    }
    else{
        for(i=0;i<=(n-1)/2;++i){
            x=arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i]=x;
        }
    }
    printf("reversed array is:\n");
    for(i=0;i<n;++i){
    printf("%d\t",arr[i]);
    }

return 0;
}