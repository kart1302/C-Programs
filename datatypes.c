#include<stdio.h>

int main(){
    int n;
    char c;
    float f;
    double d;
    printf("Enter an integer, character, float, double:\t");
    scanf("%d %c %f %lf",&n,&c,&f,&d);
    printf("Result: %d\t%c\t%f\t%lf",n,c,f,d);
return 0;
}