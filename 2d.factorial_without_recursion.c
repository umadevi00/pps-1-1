#include<stdio.h>
void fact(int);
int main(){
int num;
fact(num);
return 0;
}
void fact(int num){
printf("enter the number");
scanf("%d",&num);
int i,fact=1;
for(i=1;i<=num;i++){
fact=fact*i;}
printf("factorial of %d is %d",num,fact);
} 
