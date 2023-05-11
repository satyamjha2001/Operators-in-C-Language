#include<stdio.h>
int main() {
int n;
printf("Enter the number: ");
scanf("%d",&n);
n/=10;
n*=10;
printf("\nAfter changing last digit of your number to 0 : %d",n);
return 0;
}