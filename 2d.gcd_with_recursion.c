#include<stdio.h>
int gcd(int,int);
int main()
{
int large,small;
printf("enter large and small number");
scanf("%d %d",&large,&small);
int res=gcd(large,small);
printf("greatest common factor of %d and %d is %d",large,small,res);
return 0;
}
int gcd(int large,int small){
while((large%small)!=0){
int num=large%small;
large=small;
small=num;
}return small;
}
