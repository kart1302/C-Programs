#include<stdio.h>
int add();
int subtract();
void multiply(int,int);
float division(int,int);

int main(){
int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    float q=division(a,b);
    printf("%f\n",q);

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    multiply(a,b);

    int s=add();
    printf("%d\n",s);
    int d=subtract();
    printf("%d\n",d);
    
return 0;
}

int add()
{
    int a,b,sum;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    //printf("%d",sum);
    return sum;
}

int subtract()
{
    int a,b,difference;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    difference=a-b;
    //printf("%d",sum);
    return difference;
}

void multiply(int a,int b){
    int product=a*b;
    printf("%d\n",product);
}

float division(int a, int b)
{
    float quotient=a/b;
    return quotient;
}