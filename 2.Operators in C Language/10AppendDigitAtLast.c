#include<stdio.h>
int main() {
int n,n1;
printf("Enter the number: ");
scanf("%d",&n);
printf("Enter a digit you want to append at last:  ");
scanf("%d",&n1);
n*=10;
n+=n1;
printf("\nAfter changing last digit of your number to 0 : %d",n);
return 0;
}