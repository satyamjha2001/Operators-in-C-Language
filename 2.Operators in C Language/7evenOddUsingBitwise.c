#include<stdio.h>
int main() {
int n;
printf("Enter the number: \n");
scanf("%d",&n);
if((n&1)==0)
printf("%d is the even number",n);
else
printf("%d is the odd number",n);
return 0;
}