#include<stdio.h>
int main() {
int num;
printf("Enter A Number:\n");
scanf("%d",&num);
printf("The unit digit of the given number is: %d",(num%10));
return 0;
}