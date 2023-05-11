#include<stdio.h>
#include<math.h>
int main() {
int n,count;
printf("Enter a number: ");
scanf("%d",&n);
count=(log2(n & -n) + 1);
printf(" \nPosition of first 1 from LSB: %d",count);
return 0;
}