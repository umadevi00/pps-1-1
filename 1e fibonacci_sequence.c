#include<stdio.h>
void main()
{
int a=0,b=1,n,c,i;
printf("enter the value of\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
return 0;
}
