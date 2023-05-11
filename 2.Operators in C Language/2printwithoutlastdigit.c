#include<stdio.h>
int main() {
int num;
printf("Enter A Number:\n");
scanf("%d",&num);
printf("the number without last digit is: %d",(num/10));
return 0;
}