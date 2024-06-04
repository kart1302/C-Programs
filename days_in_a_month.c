#include<stdio.h>

int main(){
    int month, year;
    printf("Enter number of month:\t");
    scanf("%d",&month);
    if(month<1 || month>12)
        printf("Invalid");
    else if(month>=1 && month<=12)
            if(month==2){
                printf("Enter the current year:\t");
                scanf("%d",&year);
                if(year%4==0)
                        printf("Month has 29 days");
                else
                        printf("Month has 28 days");
            }
            else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
                printf("Month has 31 days");
            else
                printf("Month has 30 days");
return 0;                   
}