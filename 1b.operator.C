#include<stdio.h>
void main()
{
int a,b,ch;
printf("enter the two operands values");
scanf("%d %d",&a,&b);
printf("enter the operators addtion,subtraction,multiplication,division,mode");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("%d",a+b);
break;
case 2:printf("%d",a-b);
break;
case 3:printf("%d",a*b);
break;
case 4:printf("%d",a/b);
break;
case 5:printf("%d",a%b);
}
}
