#include <stdio.h>
int main()
{
    int n,r;
    printf("Enter number:\t");
    scanf("%d",&n);
    for(n=n;n>0;n=n/10)
        {
            r=n%10;
            printf("%d\n",r);
        }
return 0;
}
