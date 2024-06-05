#include<stdio.h>
#include<string.h>

void UL(char[]);

int main(){
    char c[10];
    scanf("%10[^\n]s",c);
    printf("%s\n",c);
    UL(c);
return 0;
}

void UL(char c[])
{
    int i;
    for(i=0;i<=strlen(c);++i){
        if(c[i]>='A'&&c[i]<='Z')
            c[i]=c[i]+32;
        else if(c[i]>='a'&&c[i]<='z')
            c[i]=c[i]-32;
    }
    printf("%s",c);
}