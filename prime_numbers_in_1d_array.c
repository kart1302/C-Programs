#include<stdio.h>

int main(){
    int n,i,x,p=0;
    printf("Enter number of values:\t");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values: ");
    for(i=0;i<n;++i){
        scanf("%d",&arr[i]);
        }
        for(i=0;i<n;++i){
            p=0;
            for(x=2;x<=arr[i]/2;++x){
                
                if(arr[i]%x==0){
                    p=1;
                    break;}
            }
            if(p==1||arr[i]==1)
                printf("%d)%d isn't a prime number\n",i+1,arr[i]);
            else
                printf("%d)%d is a prime number\n",i+1,arr[i]);
    }
return 0;
}