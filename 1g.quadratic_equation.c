#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c,det,root1,root2;
printf("enter a,b,c of quadratic equation");
scanf("%d %d %d",&a,&b,&c) ;
det=b*b-4*a*c;
root1=(-b+sqrt(det))/2*a;
root2=(-b-sqrt(det))/2*a;
if(det==0){
printf("%d %d",root1,root2);
printf("roots are real");}
else if(det>0){
printf("%d %d",root1,root2);
printf("roots are equal");}
else{
printf("roots are imaginary");}
return;
}
