#include<stdio.h>
void gcd(int,int);
int main(){
int num1,num2;
gcd(num1,num2);
return 0;
}
void gcd(int num1,int num2){
int gcd,min,i;
printf("enter two number");
scanf("%d %d",&num1,&num2);
min=(num1<num2)?num1:num2;
for(i=1;i<=min;i++){
if(num1%i==0&&num2%i==0)
gcd=i;
}
printf("greatest common factor of %d and %d is %d",num1,num2,gcd);
}
