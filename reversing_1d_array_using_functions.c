#include<stdio.h>

void rev_arr(int[],int);

int main(){
    int i,n;
    printf("Enter the number of values:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values:");
    for(i=0;i<n;++i)   
    {
        scanf("%d",&arr[i]);
    }
    rev_arr(arr,n);
}

void rev_arr(int arr[],int n)
{
    int i,x;
    
    for(i=0;i<n/2;++i)
    {
        x=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=x;
    }
    printf("reversed array is:\n");
    for(i=0;i<n;++i)
    {
        printf("%d\t",arr[i]);
    }
}