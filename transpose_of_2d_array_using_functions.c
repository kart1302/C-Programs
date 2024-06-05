#include<stdio.h>

void transpose(int[][3],int,int);

int main(){
    int m,n,r,c;
    printf("Enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    printf("Enter the inputs:");
    for(r=0;r<m;++r){
        for(c=0;c<n;++c){
            scanf("%d",&arr[r][c]);
        }
    }
    transpose(arr,m,n);
}

void transpose(int arr[][3],int m, int n)
{
    int r,c,x,arrt[n][m];
    printf("A =");
    for(r=0;r<m;++r){
        for(c=0;c<n;++c){
            printf("\t");
            printf("%d",arr[r][c]);
        }
        printf("\n");
    }
    for(r=0;r<n;++r){
        for(c=0;c<m;++c){
            x=arr[r][c];
            arrt[r][c]=arr[c][r];
        }
    }
    printf("\n");
    printf("At =");
    for(r=0;r<n;++r){
        for(c=0;c<m;++c){
            printf("\t");
            printf("%d",arrt[r][c]);
        }
        printf("\n");
    }
}
