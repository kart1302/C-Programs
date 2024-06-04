#include<stdio.h>

int main(){
    int r,c,m,n;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter the inputs:");
    for(r=0;r<m;++r){
        for(c=0;c<n;++c){
            scanf("%d",&arr[r][c]);
        }
    }
    for(r=0;r<m;++r){
        for(c=0;c<n;++c){
            printf("\t");
            printf("%d",arr[r][c]);
        }
        printf("\n");
     }
return 0;    
}