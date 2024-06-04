#include <stdio.h>

int main() {
int number;
printf("Enter number:\t");
scanf("%d",&number);
switch (number) {
 case 1:
 case 2:
 case 3:
 printf("One, Two, or Three.\n");
 break;
 case 4:
 case 5:
 case 6:
    printf("Four, Five, or Six.\n");
 break;
 default:
    printf("Greater than Six.\n");}
 return 0;
}