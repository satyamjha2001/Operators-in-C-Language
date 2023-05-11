#include<stdio.h>
#include<math.h>
int main() {
int a,digits=0;
printf("Enter the positive number\n");
scanf("%d",&a);
while(a>0)
{
    digits+=(a%10);
    a=a/10;
}
printf("Sum of the digits are: %d",digits);
return 0;
}