#include<stdio.h>

int main(){
    int r,c,m,n;
    printf("enter number of rows and columns:");
    scanf("%d%d",&m,&n);
    int arr1[m][n],arr2[m][n],arrS[m][n];
    printf("Enter the values for array1:");
    for(r=0;r<m;++r){
        for(c=0;c<n;++c){
            scanf("%d",&arr1[r][c]);
        }
    }
     printf("Enter the values for array2:");
    for(r=0;r<m;++r){
        for(c=0;c<n;++c){
            scanf("%d",&arr2[r][c]);
        }
    }
    printf("A =");
    for(r=0;r<m;++r){
        for(c=0;c<n;++c){
            printf("\t");
            printf("%d",arr1[r][c]);
        }
        printf("\n");
    }
    printf("\n");
    printf("B =");
    for(r=0;r<m;++r){
        for(c=0;c<n;++c){
            printf("\t");
            printf("%d",arr2[r][c]);
        }
        printf("\n");
    }
    for(r=0;r<m;++r){
        for(c=0;c<n;++c){
            arrS[r][c]=arr1[r][c]+arr2[r][c];
        }
    }
    printf("Sum of the 2 arrays:\n");
    for(r=0;r<m;++r){
        for(c=0;c<n;++c){
            printf("\t");
            printf("%d",arrS[r][c]);}
            printf("\n");
    }
     return 0;
}


