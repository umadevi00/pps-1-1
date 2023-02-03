#include<stdio.h>
int main()
{
int num;
printf("enter the num");
scanf("%d",&num);
if(num%2!=0&&num%3!=0&&num%5!=0&&num%7!=0)
printf("num is prime");
else
printf("num is not a prime");
return 0;
}
