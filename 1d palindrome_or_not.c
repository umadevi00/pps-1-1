#include<stdio.h>
int main()
{
int r,n,num,sum=0,rev=0;
printf("enter the num");
scanf("%d",&num);
n=num;
while(n>0){
r=n%10;
sum=sum+r;
rev=(rev*10)+r;
n=n/10;}
if(num==rev)
printf("num is a palindrome");
else
{
printf("num is not a palindrome");
}
return 0;
}
