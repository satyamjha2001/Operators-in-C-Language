#include<stdio.h>
#include<math.h>
int main() {
int n;
printf("Enter your number: ");
scanf("%d",&n);
int d=floor(log10(n));
int temp=n%10;
temp*=pow(10,d);
n/=10;
temp+=n;
printf("\nAfter rotation of one digit towards right: %d",temp);
return 0;
}