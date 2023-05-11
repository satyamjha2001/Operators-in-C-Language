#include<stdio.h>
int main() {
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("After swap first number is %d and second number is %d",a,b);
return 0;
}