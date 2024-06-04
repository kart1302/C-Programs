#include<stdio.h>

int main(){
    int i,n,f,r,revn;
    printf("Enter number of values: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values: ");
    for(i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;++i){
        r=0;
        revn=0;
        while(arr[i]!=0){
        r=arr[i]%10;
        arr[i]=arr[i]/10;
        revn=10*revn + r;
    }
        if(revn!=arr[n-1-i]){
            f=1;
            break;
        }
    }
    if(f==1)
        printf("Not a Palindrome");
    else
        printf("Palindrome");
return 0;
}