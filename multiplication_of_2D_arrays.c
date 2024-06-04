#include<stdio.h>

int main(){
    int r,c,m,n,x,y,k;
    printf("Enter the number of rows and columns of 1st array: ");
    scanf("%d%d",&m,&n);
    int arr1[m][n];
    printf("Enter the number of rows and columns of 2nd array: ");
    scanf("%d%d",&x,&y);
    int arr2[x][y];
    if(x!=n){
        printf("Invalid");
    }
    else{
    printf("Enter the values of array 1:");
    for(r=0;r<m;++r){
        for(c=0;c<n;++c){
            scanf("%d",&arr1[r][c]);
        }
    }
    printf("Enter the values of array 2:");
    for(r=0;r<n;++r){
        for(c=0;c<y;++c){
            scanf("%d",&arr2[r][c]);
        }
    }
    int arrP[m][y];
    for(r=0;r<m;++r){
        for(c=0;c<y;++c){
            arrP[r][c]=0;
            for(k=0;k<n;++k){
                arrP[r][c]+=arr1[r][k]*arr2[k][c];
            }
            printf("%d",arrP[r][c]);
        }
        printf("\n");
    }
    }
return 0;
}