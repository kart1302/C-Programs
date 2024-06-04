#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char c[10],c1[10];
    scanf("%10[^\n]s",c);
    printf("%s\n",c);
    for(i=0;i<=strlen(c);++i){
        if(c[i]>='A'&&c[i]<='Z')
            c[i]=c[i]+32;
        else if(c[i]>='a'&&c[i]<='z')
            c[i]=c[i]-32;
    }
    printf("%s",c);
return 0;
}